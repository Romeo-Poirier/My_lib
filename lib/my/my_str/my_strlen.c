/*
** EPITECH PROJECT, 2024
** d03 - my_strlen
** File description:
** counts the number of chars in a str and returns it
*/

int my_strlen(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
