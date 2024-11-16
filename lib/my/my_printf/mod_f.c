/*
** EPITECH PROJECT, 2024
** mod_f_char.c
** File description:
** .
*/

#include <stdlib.h>
#include "my.h"
#include <stdint.h>

static double get_precision(double nb, int precision)
{
    for (int i = 0; i < precision; i++)
        nb *= 10;
    return nb;
}

static double get_precision_rev(double nb, int precision)
{
    for (int i = 0; i < precision; i++)
        nb /= 10;
    return nb;
}

int mod_f(double nb, int precision)
{
    long long int full = (get_precision(nb, precision + 1) + 5) / 10;
    long long int nbr_entier = get_precision_rev(full, precision);
    long long int nbr_decimal = full - get_precision(nbr_entier, precision);
    int len = 0;

    if (nbr_entier == 0)
            len++;
    len += my_put_nb(nbr_entier);
    len += my_putchar('.');
    len += my_put_nb(nbr_decimal);
    if (nbr_decimal == 0) {
        for (int i = 0; i < precision - 1; i++)
            len += my_putchar('0');
    }
    return len + 1;
}

int mod_f_size(double nb, int precision)
{
    long long int full = (get_precision(nb, precision + 1) + 5) / 10;
    long long int nbr_entier = get_precision_rev(full, precision);
    long long int nbr_decimal = full - get_precision(nbr_entier, precision);
    int len = 0;

    if (nbr_entier == 0)
            len++;
    len += my_count_digit(nbr_entier);
    len += 1;
    len += my_count_digit(nbr_decimal);
    if (nbr_decimal == 0) {
        for (int i = 0; i < precision - 1; i++)
            len += 1;
    }
    return len + 1;
}
