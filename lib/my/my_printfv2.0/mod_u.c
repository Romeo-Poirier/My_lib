/*
** EPITECH PROJECT, 2024
** mod_u
** File description:
** .
*/

#include "../headers/my.h"

int mod_u(int width, int nb)
{
    int len = 0;

    if (nb >= 0) {
        len += padding(my_intlen(nb), width);
        len += my_putint(nb);
    } else
        return 0;
    return len;
}
