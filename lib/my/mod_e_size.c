/*
** EPITECH PROJECT, 2024
** mod_e size
** File description:
** mod_e but doesn't print anything
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

static double get_precision_rev(long long int nb, int precision)
{
    for (int i = 0; i < precision; i++)
        nb /= 10;
    return nb;
}

static long long int unite(long long int nb, int precision)
{
    long long int full_t = nb;

    while (full_t % 10 == 0) {
        precision--;
        full_t /= 10;
    }
    full_t = get_precision_rev(full_t, (my_count_digit(full_t) - 1));
    return full_t;
}

static long long int res_e(long long int nb)
{
    long long int e = my_count_digit(nb) - 1;
    int len = 0;

    len += 1;
    if (e < 0) {
        len += 1;
        len += 1;
        e *= -1;
    } else if (e >= 0 && e < 10) {
        len += 1;
        len += 1;
    } else
        len += 1;
    len += my_count_digit(e);
    return len;
}

static long long int nbr_d(long long int f, long long int e, int p)
{
    long long int res = 0;

    if (e == 0)
        return res;
    while (my_count_digit(f) != my_count_digit(e))
        e *= 10;
    res = f - e;
    if (res == 0)
        return res;
    while (my_count_digit(res) != p)
        res /= 10;
    return res;
}

int mod_e_size(double nb, int precision)
{
    long long int full = (get_precision(nb, precision + 1) + 5) / 10;
    int digits = my_count_digits((int)nb) - 1;
    long long int nbr_entier = unite(full, precision - digits);
    long long int nbr_decimal = nbr_d(full, nbr_entier, precision);
    int len = 0;

    if (nbr_entier == 0)
            len++;
    if (nbr_entier == 10)
        nbr_entier /= 10;
    len += my_count_digit(nbr_entier);
    len += 1;
    len += my_count_digit(nbr_decimal);
    if (nbr_decimal == 0) {
        for (int i = 0; i < precision - 1; i++)
            len += 1;
    }
    len += res_e((int)nb);
    return len;
}
