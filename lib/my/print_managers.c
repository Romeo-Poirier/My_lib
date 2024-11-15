/*
** EPITECH PROJECT, 2024
** printf managers
** File description:
** funcs for managing displays and mods
*/

#include "my.h"
#include <stdio.h>

int padding(int arg_size, int width)
{
    int len = 0;

    if (arg_size < width) {
        for (int i = 0; i < width - arg_size; i++)
            len += my_putchar(' ');
    }
    return len;
}
