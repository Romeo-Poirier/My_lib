/*
** EPITECH PROJECT, 2024
** task 09 - my_str_low_case
** File description:
** reverse of strupcase
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
    }
    return str;
}
