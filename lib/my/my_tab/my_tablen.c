/*
** EPITECH PROJECT, 2025
** my_lib
** File description:
** my_tablen
*/

#include "../headers/my_tab.h"


int str_tablen(char **tab)
{
    int size = 0;

    for (char **ptr = tab; *ptr != NULL; ptr++) {
        size++;
    }
    return size;
}
