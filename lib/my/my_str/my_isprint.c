/*
** EPITECH PROJECT, 2024
** my_str_isprintable
** File description:
** returns 1 if is printable, 0 otherwise
*/

int my_str_isprint(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 33 || str[i] > 126)
            return 0;
    }
    return 1;
}

int my_char_isprint(char const c)
{
    if (c < 33 || c > 126)
        return 0;
    return 1;
}

int my_char_isfence(char const c)
{
    if (c == ' ' || c == '\n' || c == '_' || c == '\0')
        return 1;
    return 0;
}
