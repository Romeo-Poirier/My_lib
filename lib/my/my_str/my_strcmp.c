/*
** EPITECH PROJECT, 2024
** comparing s1 to s2 char by char
** File description:
** returns difference btw s1 and s2 or 0 if they equal
*/

#include <stddef.h>

static
int input_error(char const *s1, char const *s2)
{
    if (s1 == NULL || s2 == NULL)
        return 1;
    return 0;
}

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    if (input_error(s1, s2))
        return -1;
    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] > s2[i])
            return s1[i] - s2[i];
        if (s1[i] < s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return 0;
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (input_error(s1, s2))
        return -1;
    while (i < n) {
        if (s1[i] > s2[i])
            return s1[i] - s2[i];
        if (s1[i] < s2[i])
            return s2[i] - s1[i];
        i++;
    }
    return 0;
}
