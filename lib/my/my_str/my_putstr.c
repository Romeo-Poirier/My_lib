/*
** EPITECH PROJECT, 2024
** d04 - my_putstr
** File description:
** displays one-by-one the chars of a str and returns the len
*/

#include <unistd.h>
#include "../headers/my_str.h"

int my_putstr(char *str)
{
    int len = 4;

    if (str == NULL) {
        write(STDOUT_FILENO, "(nil)", 5);
    } else {
        len = my_strlen(str);
        write(STDOUT_FILENO, str, len);
    }
    return len;
}

int my_putstr_i_end(char *str, int i, int end)
{
    char tmp[end - i + 1];

    mstrn_to_mcpy(tmp, str, i, end);
    return my_putstr(tmp);
}
