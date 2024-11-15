/*
** EPITECH PROJECT, 2024
** d04 - my_putstr
** File description:
** displays one-by-one the chars of a str and returns the len
*/

#include "../my.h"

int my_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return i;
}

int my_fstr(int width, char *str)
{
    int len = 0;

    len += padding(my_strlen(str), width);
    len += my_putstr(str);
    return len;
}

int my_putstr_i_end(const char *str, int i, int end)
{
    int start = i;

    while (str[i] != '\0' && i < end) {
        my_putchar(str[i]);
        i++;
    }
    return i - start;
}
