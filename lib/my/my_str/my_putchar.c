/*
** EPITECH PROJECT, 2024
** my_putchar
** File description:
** displays a character and returns 1
*/

#include <unistd.h>

int my_putchar(char const c)
{
    write(STDOUT_FILENO, &c, 1);
    return 1;
}
