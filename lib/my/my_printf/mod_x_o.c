/*
** EPITECH PROJECT, 2024
** mod_x_o.c
** File description:
** .
*/

#include "my.h"

int mod_x(int width, int nb)
{
    int len = 0;

    len += padding(base_switcher_size(nb, 16), width);
    len += base_switcher(nb, 16);
    return len;
}

int mod_o(int width, int nb)
{
    int len = 0;

    len += padding(base_switcher_size(nb, 8), width);
    len += base_switcher(nb, 8);
    return len;
}

int mod_x_maj(int width, int nb)
{
    int len = 0;

    len += padding(base_switcher_size(nb, 16), width);
    len += base_switcher_maj(nb, 16);
    return len;
}
