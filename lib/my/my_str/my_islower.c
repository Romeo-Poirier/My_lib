/*
** EPITECH PROJECT, 2024
** my_str_islower
** File description:
** returns 1 if is only lowercase alphabet, 0 otherise
*/

int my_str_islower(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 97 || str[i] > 122)
            return 0;
    }
    return 1;
}