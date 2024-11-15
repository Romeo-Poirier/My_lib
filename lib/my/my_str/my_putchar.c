/*
** EPITECH PROJECT, 2024
** my_putchar
** File description:
** displays a character and returns 1
*/

#include <unistd.h>
#include "../my.h"

int my_putchar(char c)
{
    write(1, &c, 1);
    return 1;
}

int my_fchar(int width, int int_arg)
{
    int len = 0;
    char to_print = (char) int_arg;

    len += padding(1, width);
    len += my_putchar(to_print);
    return len;
}
