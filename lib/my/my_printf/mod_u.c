/*
** EPITECH PROJECT, 2024
** mod_u
** File description:
** .
*/

#include "my.h"

int mod_u(int width, int nb)
{
    int len = 0;

    if (nb >= 0) {
        len += padding(my_count_digits(nb), width);
        len += my_put_nbr(nb);
    } else
        return 0;
    return len;
}
