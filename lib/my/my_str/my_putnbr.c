/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** 3 funcs to display numbers
*/

#include "../headers/my_str.h"

int my_putlli(long long int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb < 10) {
        my_putchar((nb % 10) + 48);
    } else {
        my_putlli(nb / 10);
        my_putlli(nb % 10);
    }
    return my_llilen(nb);
}

int my_putint(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb < 10) {
        my_putchar((nb % 10) + 48);
    } else {
        my_putint(nb / 10);
        my_putint(nb % 10);
    }
    return my_intlen(nb);
}
