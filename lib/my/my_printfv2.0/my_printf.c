/*
** EPITECH PROJECT, 2025
** My_lib
** File description:
** version 2.0 of my_printf
*/

#include <unistd.h>
#include <stdlib.h>
#include "../headers/my_printfv2_0.h"
#include "../headers/my_str.h"
#include "../headers/my_mem.h"

static
const specifier_t specifiers_tab[20] =
{
    {'d', NULL},
    {'i', NULL},
    {'s', NULL},
    {'f', NULL},
    {'F', NULL},
    {'p', NULL},
    {'u', NULL},
    {'c', NULL},
    {'x', NULL},
    {'X', NULL},
    {'a', NULL},
    {'A', NULL},
    {'e', NULL},
    {'E', NULL},
    {'%', NULL},
    {'o', NULL},
    {'g', NULL},
    {'G', NULL},
    {'n', NULL},
    {'\0', NULL}
};

static
char my_char_ispecifier(char c)
{
    char *specifier_list = "disfFpucxXaAeE%ogGn";

    for (int i = 0; specifier_list[i] != '\0'; i++) {
        if (c == specifier_list[i])
            return specifier_list[i];
    }
    return '\0';
}

static
int find_specifier(const char *format, int i)
{
    i++;
    for (; format[i] != '\0' && format[i] != ' '; i++) {
        if (my_char_ispecifier(format[i]) != '\0')
            break;
    }
    if (format[i] == '\0' || format[i] == ' ')
        return -1;
    return i;
}

static
int display_format(const char *format, int start, int end)
{
    if (start == end)
        return 0;
    return my_putstr_i_end(format, start, end);
}

static
int display_specifier(va_list list, int i, format_t *format)
{
    int len = 0;
    char *str = NULL;

    if (specifiers_tab[i].func == NULL) {
        write(STDOUT_FILENO, &specifiers_tab[i].letter, 1);
        return 1;
    }
    str = specifiers_tab[i].func(list, format);
    len += my_putstr(str);
    free(str);
    return len;
}

int flag_manager_init_error(format_t *arg_format, int i_end, int i)
{
    if (arg_format == NULL || i_end < i) {
        if (arg_format != NULL)
            free_arg_format(arg_format);
        if (i_end < i)
            write(STDERR_FILENO,
            "my_printf: unkown or missing specifier\n", 39);
        return 1;
    }
    return 0;
}

int flag_manager(const char *format, int i, va_list list, int len)
{
    int i_end = find_specifier(format, i);
    format_t *arg_format = init_format_t(len);
    char *mod_format = NULL;
    int old_len = len;

    if (flag_manager_init_error(arg_format, i_end, i))
        return -1;
    mod_format = my_calloc(i_end - i, sizeof(char));
    if (mod_format == NULL)
        return -1;
    mstrn_to_mcpy(mod_format, format, i++, i_end);
    mod_parsing(mod_format, arg_format, list);
    printf("mof_parsing: %s, %d, %d, %s\n", arg_format->flags, arg_format->width, arg_format->precision, arg_format->len_mod);
    for (int j = 0; specifiers_tab[j].letter != '\0'; j++)
        if (specifiers_tab[j].letter == format[i_end])
            len += display_specifier(list, j, arg_format);
    if (old_len == len)
        len += my_putstr_i_end(format, i, i_end);
    free_arg_format(arg_format);
    return len;
}

int my_printfv2(const char *format, ...)
{
    va_list list;
    int start = 0;
    int len = 0;

    if (format == NULL)
        return -1;
    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            len += display_format(format, start, i - 1);
            len = flag_manager(format, i, list, len);
            i = find_specifier(format, i);
            start = i + 1;
        }
        if (len == -1)
            return -1;
    }
    len += display_format(format, start, my_strlen(format));
    va_end(list);
    return len;
}
