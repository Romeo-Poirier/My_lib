/*
** EPITECH PROJECT, 2025
** my_lib
** File description:
** my_nullify
*/

#include "../headers/my_str.h"

int nullify_from_till(char *src, int n, char c, int backward)
{
    if (backward)
        backward = -1;
    else
        backward = 1;
    if (src == NULL)
        return 0;
    for (int i = n; i >= 0 && i <= n; i += (1 * backward)) {
        if (src[i] == c)
            break;
        src[i] = '\0';
    }
    return 0;
}
