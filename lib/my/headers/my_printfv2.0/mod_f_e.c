/*
** EPITECH PROJECT, 2024
** mod_f_e
** File description:
** .
*/

#include "../headers/my.h"

int mod_f_maj_f(int width, double nb, int precision)
{
    int len = 0;

    if (nb < 0) {
        nb *= -1;
        len += padding(mod_f_size(nb, precision) + 1, width);
        len += my_putchar('-');
    } else
        len += padding(mod_f_size(nb, precision), width);
    len += mod_f(nb, precision);
    return len;
}

int mod_e_maj_e(int width, double nb, int precision)
{
    int len = 0;

    if (nb < 0) {
        nb *= -1;
        len += padding(mod_e_size(nb, precision) + 1, width);
        len += my_putchar('-');
    } else
        len += padding(mod_e_size(nb, precision), width);
    len += mod_e(nb, precision);
    return len;
}
