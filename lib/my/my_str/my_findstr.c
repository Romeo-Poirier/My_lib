/*
** EPITECH PROJECT, 2024
** task 05 - my_strstr
** File description:
** searches for a sub-str inside str
*/

#include "../my.h"

char *my_strstr(char *str, char const *to_find)
{
    int verified_letters = 0;
    int i_find = 0;

    for (int i = 0; i <= my_strlen(str); i++) {
        if (str[i] == to_find[i_find])
            verified_letters++;
        else {
            verified_letters = 0;
            i_find = 0;
        }
        if (verified_letters == my_strlen(to_find))
            return &str[i - verified_letters];
        i_find++;
    }
    return 0;
}
