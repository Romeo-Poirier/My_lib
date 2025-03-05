/*
** EPITECH PROJECT, 2024
** task 05 - my_strstr
** File description:
** return the index where to_find was found,
** -1 if not found
*/

#include "../headers/my_str.h"

char *my_strstr(char *haystack, char *needle)
{
    char *str = haystack;
    int len = my_strlen(needle);

    if (needle == NULL || haystack == NULL)
        return NULL;
    for (; *str; str++) {
        if (my_strncmp(str, needle, len) == 0)
            return str;
    }
    if (!*str)
        return NULL;
    return str;
}
