/*
** EPITECH PROJECT, 2024
** d04 - my_putstr
** File description:
** displays one-by-one the chars of a str and returns the len
*/

#include <unistd.h>
#include "../headers/my_str.h"

int my_putstr(char const *str)
{
    int i = my_strlen(str);

    write(1, str, i);
    return i;
}

int my_putstr_i_end(char const *str, int i, int end)
{
    char tmp[end - i + 1];
    int start = i;

    mstrn_to_mcpy(tmp, str, i, end);
    return my_putstr(tmp);
}

//move to my_printf/
/*int my_fstr(int width, char *str)
{
    int len = 0;

    len += padding(my_strlen(str), width);
    len += my_putstr(str);
    return len;
    }
*/
