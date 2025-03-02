/*
** EPITECH PROJECT, 2025
** minishell1.2
** File description:
** my_strdupcat
*/

#include "../headers/my_str.h"
#include "../headers/my_mem.h"

char *strdupcat(const char *s1, const char *s2)
{
    char *str = NULL;

    if (s1 != NULL && s2 != NULL)
        str = my_calloc(my_strlen(s1) + my_strlen(s2) + 1, sizeof(char));
    if (str == NULL)
        return NULL;
    my_strcpy(str, s1);
    my_strcat(str, s2);
    return str;
}

char *strdup2cat(const char *s1, const char *s2, const char *s3)
{
    char *str = NULL;

    if (s1 != NULL && s2 != NULL && s3 != NULL)
        str = my_calloc(my_strlen(s1) + my_strlen(s2) + my_strlen(s3) + 1,
        sizeof(char));
    if (str == NULL)
        return NULL;
    my_strcpy(str, s1);
    my_strcat(str, s2);
    my_strcat(str, s3);
    return str;
}
