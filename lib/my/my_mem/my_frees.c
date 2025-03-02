/*
** EPITECH PROJECT, 2025
** my_lib
** File description:
** my_frees
*/

#include "../headers/my_mem.h"

char **free_strtab(char **tab)
{
    if (tab == NULL)
        return NULL;
    for (int i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);
    return NULL;
}
