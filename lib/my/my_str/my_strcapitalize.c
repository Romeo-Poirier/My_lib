/*
** EPITECH PROJECT, 2024
** task 10 - my_strcapitalize
** File description:
** capitalizes every word
*/

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122 && str[i - 1] == 32)
            str[i] -= 32;
    }
    return str;
}
