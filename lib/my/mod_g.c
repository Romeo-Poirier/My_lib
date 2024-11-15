/*
** EPITECH PROJECT, 2024
** mod_g.c
** File description:
** .
*/
#include "my.h"

int mod_g(int width, double nb, int precision)
{
    long long int nbr = (long long int)nb;
    int len = 0;
    int dig = my_count_digit(nbr);

    if (dig <= precision) {
        if (dig == precision) {
            len += padding(my_count_digit(nbr), width);
            len += my_put_nb(nbr);
        } else
            len += mod_f_g(nb, precision - dig, width);
    } else
        len += mod_e_maj_e(nb, precision - 1, width);
    return len;
}