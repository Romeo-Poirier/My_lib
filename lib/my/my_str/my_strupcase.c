/*
** EPITECH PROJECT, 2024
** task 08 - my_strupcase
** File description:
** changes all smallcase to uppercase
*/

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
    }
    return str;
}
