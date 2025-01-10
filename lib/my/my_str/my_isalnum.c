/*
** EPITECH PROJECT, 2025
** my_radar_v0.1
** File description:
** my_isalnum
*/

#include "../headers/my_str.h"

int my_str_isalnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (!my_char_isalnum(str[i]))
            return 0;
    return 1;
}

int my_char_isalnum(char const c)
{
    if (my_char_isalpha(c) || my_char_isnumer(c))
        return 1;
    return 0;
}
