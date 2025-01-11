/*
** EPITECH PROJECT, 2025
** my_printf
** File description:
** my_fnbr
*/

#include "../headers/my.h"

int my_fnbr(int width, int nb)
{
    int len = 0;

    len += padding(my_intlen(nb), width);
    len += my_putint(nb);
    return len;
}
