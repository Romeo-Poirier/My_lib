/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** my_count_digits returns the number of digits of an int
** my_put_nbr displays an int
** my_nbr_to_str transforms an int into a str
*/

#include "my.h"

int my_count_digit(long long int nb)
{
    int dig = 0;

    if (nb < 0) {
        dig++;
        nb *= -1;
    }
    while (nb > 0) {
        dig++;
        nb /= 10;
    }
    return dig;
}

int my_put_nb(long long int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb < 10) {
        my_putchar((nb % 10) + 48);
    } else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return my_count_digit(nb);
}

int my_count_digits(int nb)
{
    int dig = 0;

    if (nb < 0) {
        dig++;
        nb *= -1;
    }
    while (nb > 0) {
        dig++;
        nb /= 10;
    }
    return dig;
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb < 10) {
        my_putchar((nb % 10) + 48);
    } else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return my_count_digits(nb);
}

int my_fnbr(int width, int nb)
{
    int len = 0;

    len += padding(my_count_digits(nb), width);
    len += my_put_nbr(nb);
    return len;
}
