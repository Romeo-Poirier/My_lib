/*
** EPITECH PROJECT, 2025
** me_world
** File description:
** my_nbr_to_str
*/

#include "../headers/my_str.h"
#include "../headers/my_mem.h"

char *int_to_str(int nb)
{
    int len = my_intlen(nb);
    char *str = my_calloc(len + 1, sizeof(char));
    int i = 0;

    if (str == NULL)
        return NULL;
    if (nb < 0) {
        str[len - 1] = '-';
        nb *= -1;
        len -= 1;
    }
    for (; i < len; i++) {
        str[i] = nb % 10 + '0';
        nb /= 10;
    }
    my_revstr(str);
    return str;
}
