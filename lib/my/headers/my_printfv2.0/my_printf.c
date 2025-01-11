/*
** Personnal Project, 2025
** My_lib
** File description:
** version 2.0 of my_printf
*/

#include <unistd.h>
#include <stdlib.h>
#include "../headers/my_printfv2_0.h"
#include "../headers/my_str.h"
#include "../headers/my_mem.h"

static const specifier_t specifiers_tab[8] =
{
    {'d', NULL},
    {'i', NULL},
    {'o', NULL},
    {'u', NULL},
    {'x', NULL},
    {'X', NULL},
    {'e', NULL},
    {'E', NULL},
    {'f', NULL},
    {'F', NULL},
    {'g', NULL},
    {'G', NULL},
    {'a', NULL},
    {'A', NULL},
    {'c', NULL},
    {'s', NULL},
    {'p', NULL},
    {'n', NULL},
    {'%', NULL},
    NULL
};

static char my_char_ispecifier(char c)
{
    char *specifier_list = "diouxXeEfFgGaAcCspn%";

    for (int i = 0; specifier_list[i] != '\0'; i++) {
        if (c == specifier_list[i])
            return specifier_list[i];
    }
    return '\0';
}

static int find_specifier(const char *format, int i)
{
    for (; format[i] != '\0'; i++) {
        if (my_char_ispecifier(format[i]) != '\0')
            break;
    }
    if (format[i] == '\0')
        return -1;
    return i;
}

static int display_format(const char *format, int start, int end)
{
    if (start == end)
        return 0;
    return my_putstr_i_end(format, start, end);
}

static int display_specifier(va_list list, int i, format_t *format)
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

int flag_manager(const char *format, int i, va_list list, int len)
{
    int i_end = find_specifier(format, i);
    format_t *arg_format = {NULL, 0, 0, NULL, len};
    int old_len = len;

    for (int j = 0; specifiers_tab[j].letter != '\0'; j++)
        if (specifiers_tab[j].letter == format[i_end])
            len += display_specifier(list, j, arg_format);
    if (old_len == len)
        len += my_putstr_i_end(format, i, i_end);
    return len;
}

int my_printf(const char *format, ...)
{
    va_list list = NULL;
    int start = 0;
    int len = 0;

    if (format == NULL)
        return 84;
    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            len += display_format(format, start, i - 1);
            len = flag_manager(format, ++i, list, len);
            i = find_specifier(format, i);
            start = i + 1;
        }
    }
    va_end(list);
    return len;
}
