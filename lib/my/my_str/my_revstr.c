/*
** EPITECH PROJECT, 2024
** task 03 - my_revstr
** File description:
** reverses str
*/

#include "../my.h"

char *my_revstr(char *str)
{
    int i = my_strlen(str) - 1;
    char tmp;

    for (int j = 0; str[j] != '\0'; j++) {
        if (j >= i)
            break;
        tmp = str[j];
        str[j] = str[i];
        str[i] = tmp;
        i--;
    }
    return str;
}
