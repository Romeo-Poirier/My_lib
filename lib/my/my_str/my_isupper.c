/*
** EPITECH PROJECT, 2024
** my_str_isupper
** File description:
** returns 1 if is upper case alphabet, 0 otherwise
*/

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 65 || str[i] > 90)
            return 0;
    }
    return 1;
}
