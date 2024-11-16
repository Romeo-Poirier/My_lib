/*
** EPITECH PROJECT, 2024
** d04 - my_putstr
** File description:
** displays one-by-one the chars of a str and returns the len
*/

#include "../headers/my_str.h"

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return i;
}
//move to my_printf/
int my_fstr(int width, char *str)
{
    int len = 0;

    len += padding(my_strlen(str), width);
    len += my_putstr(str);
    return len;
}

int my_putstr_i_end(char const *str, int i, int end)
{
    int start = i;

    while (str[i] != '\0' && i < end) {
        my_putchar(str[i]);
        i++;
    }
    return i - start;
}
