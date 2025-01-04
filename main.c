/*
** EPITECH PROJECT, 2024
** main
** File description:
** testing the library
*/

#include "include/my_mem.h"
#include <stdio.h>

int *testing_stuff(void) {
    int *list = my_calloc(6, sizeof(char));

    if (list == NULL)
        return NULL;
    for (int i = 0; i < 6 - 1; i++)
        list[i] = i;
    return list; 
}


int main(void)
{
    int *list = testing_stuff();

    if (list == NULL)
        return 84;
    for (int i = 0; i < 6; i++)
        printf("%d\n", list[i]);
    return 0;
}
