/*
** EPITECH PROJECT, 2024
** managers for printf
** File description:
** printf managers func
*/

#include "../headers/my.h"
#include <stdarg.h>
#include <stdio.h>

int width_manager(const char *format, int i, va_list list)
{
    if (my_char_isnumer(format[i]) == 1)
        return my_getnbr_from(format, i);
    if (format[i] == '*')
        return va_arg(list, int);
    return -1;
}
