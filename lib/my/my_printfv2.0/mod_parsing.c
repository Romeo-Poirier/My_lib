/*
** EPITECH PROJECT, 2025
** My_lib | my_printf
** File description:
** mod_parsing
*/

#include "../headers/my_printfv2_0.h"
#include "../headers/my_str.h"
#include "../headers/my_math.h"
#include "../headers/my_mem.h"
#include <stdlib.h>

void free_arg_format(format_t *arg_format)
{
    if (arg_format == NULL)
        return;
    if (arg_format->flags != NULL)
        free(arg_format->flags);
    if (arg_format->len_mod)
        free(arg_format->len_mod);
    free(arg_format);
}


format_t *init_format_t(int len)
{
    format_t *arg_format = my_calloc(1, sizeof(format_t));

    if (arg_format == NULL)
        return NULL;
    arg_format->flags = my_calloc(6, sizeof(char));
    arg_format->len_mod = my_calloc(3, sizeof(char));
    if (arg_format->flags == NULL || arg_format->len_mod == NULL) {
        if (arg_format->flags != NULL)
            free(arg_format->flags);
        if (arg_format->len_mod != NULL)
            free(arg_format->len_mod);
        free(arg_format);
        return NULL;
    }
    arg_format->current_len = len;
    arg_format->width = 0;
    arg_format->precision = 0;
    return arg_format;
}

//get_ width and precision
static void get_wp(char const *mft, format_t *arg_format, va_list list, int i)
{
    if (my_char_isnumer(mft[i])) {
        arg_format->width = my_getnbr_from(mft, i);
        while (my_char_isnumer(mft[i]))
            i++;
    }
    if (mft[i] == '.') {
        arg_format->precision = my_getnbr_from(mft, ++i);
        while (my_char_isnumer(mft[i]))
            i++;
    }
}

//mft should only be %[flags][width][.precision][length modifier]specifier
format_t *mod_parsing(char const *mft, format_t *arg_format, va_list list)
{
    int i = 0;

    for (; mft[i] != '\0'; i++) {
        if (my_char_is_in(mft[i], "#0- +"))
            arg_format->flags[my_strlen(arg_format->flags) % 5] = mft[i];
        else
            break;
    }
    get_wp(mft, arg_format, list, i);
    for (; mft[i] != '\0'; i++) {
        if (my_char_is_in(mft[i], "hlL"))
            arg_format->len_mod[my_strlen(arg_format->len_mod) % 2] = mft[i];
        else
            break;
    }
    return arg_format;
}
