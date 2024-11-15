/*
** EPITECH PROJECT, 2024
** task 01 - my_strcpy
** File description:
** 3 funcs to copy src into dest
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *my_strncpy(char *dest, char const *src, int n)
{
    if (n < 0)
        return 0;
    for (int i = 0; i < n; i++)
        dest[i] = src[i];
    dest[n] = '\0';
    return dest;
}

char *mstrn_to_mcpy(char *dest, char const *src, int n, int m)
{
    int dest_i = 0;

    if (n < 0)
        return 0;
    for (int i = n; i < m; i++) {
        dest[dest_i] = src[i];
        dest_i++;
    }
    dest[m - n] = '\0';
    return dest;
}