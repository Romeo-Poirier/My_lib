/*
** EPITECH PROJECT, 2025
** my_lib
** File description:
** my_puttab
*/

#include "../headers/my_tab.h"

int str_puttab(char **tab, char *separator)
{
    int len = 0;

    if (separator == NULL)
        separator = ", ";
    for (char **ptr = tab; *ptr != NULL; ptr++) {
        len += my_putstr(*ptr);
        if (*(ptr + 1) != NULL)
            len += my_putstr(separator);
    }
    return len;
}
