/*
** EPITECH PROJECT, 2024
** d03 - my_strlen
** File description:
** counts the number of chars in a str and returns it
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int mstrn_to_clen(char const *str, int n, char c)
{
    int i = 0;

    if (n < 0 || n > my_strlen(str))
        return -1;
    while (str[n + i] != '\0' && str[n + i] != '\0') {
        i++;
    }
    return i;
}
