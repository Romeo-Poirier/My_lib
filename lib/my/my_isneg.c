/*
** EPITECH PROJECT, 2024
** task 04 - my isneg
** File description:
** displays N if int is negative and P otherwise
*/

#include <unistd.h>

static void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
    return (0);
}
