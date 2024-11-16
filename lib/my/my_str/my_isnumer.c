/*
** EPITECH PROJECT, 2024
** my_str_isnum
** File description:
** returns 1 if str is only numerical, 0 otherwise
*/

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 48 || str[i] > 57)
            return 0;
    }
    return 1;
}

int my_char_isnumer(char const c)
{
    if (c < 48 || c > 57)
        return 0;
    return 1;
}
