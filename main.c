/*
** EPITECH PROJECT, 2024
** main
** File description:
** testing the library
*/

#include "my.h"


int main(void)
{
    my_printf("strlen of NULL: %d\nstrlen of empty string; %d\n",
    my_strlen(NULL), my_strlen(""));
    return 0;
}
