/*
** EPITECH PROJECT, 2025
** secured
** File description:
** my_fchar
*/

#include "../headers/my.h"

int my_fchar(int width, int int_arg)
{
    int len = 0;
    char to_print = (char) int_arg;

    len += padding(1, width);
    len += my_putchar(to_print);
    return len;
}
