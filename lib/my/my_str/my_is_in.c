/*
** EPITECH PROJECT, 2025
** My_lib
** File description:
** my_is_in
*/

int my_char_is_in(char c, char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == c)
            return 1;
    return 0;
}