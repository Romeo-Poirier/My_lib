/*
** EPITECH PROJECT, 2024
** d09 - task02 - my_strcat.c
** File description:
** concatenates 2 str
*/

#include "../headers/my_str.h"

char *my_strcat(char *dest, char *src)
{
    int len_dest = my_strlen(dest);

    for (int i = 0; i < my_strlen(src); i++)
        dest[i + len_dest] = src[i];
    dest[my_strlen(src) + len_dest] = '\0';
    return &dest[0];
}

char *my_strncat(char *dest, char *src, int nb)
{
    int len_dest = my_strlen(dest);

    for (int i = 0; i < nb; i++)
        dest[i + len_dest] = src[i];
    dest[my_strlen(src) + len_dest] = '\0';
    return &dest[0];
}

char *mstrn_to_mcat(char *dest, char *src, int n, int m)
{
    int len_dest = my_strlen(dest);

    for (int i = n; i < m; i++) {
        dest[len_dest] = src[i];
        len_dest++;
    }
    dest[len_dest] = '\0';
    return &dest[0];
}
