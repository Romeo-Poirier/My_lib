/*
** EPITECH PROJECT, 2025
** my_lib
** File description:
** my_extendtab
*/

#include "../headers/my_tab.h"
#include "../headers/my_mem.h"

char **str_extendtab(char **tab, int nmemb)
{
    char **new_tab = my_calloc(nmemb, sizeof(char *));

    if (new_tab == NULL)
        return NULL;
    for (int i = 0; tab[i] != NULL; i++) {
        new_tab[i] = my_strdup(tab[i]);
        if (new_tab[i] == NULL)
            return free_strtab(new_tab);
    }
    free_strtab(tab);
    return new_tab;
}
