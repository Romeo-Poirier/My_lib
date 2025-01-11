/*
** EPITECH PROJECT, 2024
** main
** File description:
** testing the library
*/

#include "include/my.h"
#include <stdlib.h>
#include <stdio.h>

int *test_calloc(void) {
    int *list = my_calloc(6, sizeof(int));

    if (list == NULL)
        return NULL;
    for (int i = 1; i < 6; i++)
        list[i - 1] = i;
    return list; 
}


int main(void)
{
    int *list = test_calloc();

    if (list == NULL)
        return 84;
    for (int i = 0; list[i] != 0; i++)
        printf("%d\n", list[i]);
    free(list);
    return 0;
}
