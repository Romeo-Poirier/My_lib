/*
** EPITECH PROJECT, 2024
** my_str_isprintable
** File description:
** returns 1 if is printable, 0 otherwise
*/

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 33 || str[i] > 126)
            return 0;
    }
    return 1;
}
