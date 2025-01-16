/*
** EPITECH PROJECT, 2025
** secured
** File description:
** my_fstr
*/

#include "../headers/my.h"

int my_fstr(int width, char *str)
{
    int len = 0;

    if (str == NULL)
        len += padding(5, width);
    else
        len += padding(my_strlen(str), width);
    len += my_putstr(str);
    return len;
}
