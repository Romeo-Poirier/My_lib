/*
** EPITECH PROJECT, 2024
** lib
** File description:
** my_puterr
*/

#include <unistd.h>
#include "../headers/my_str.h"

int my_write_err(char *str)
{
    return write(STDERR_FILENO, str, my_strlen(str));
}

int my_puterr(char *name, char *err)
{
    int len = 0;

    if (name != NULL) {
        len += my_write_err(name);
        len += my_write_err(": ");
    }
    if (err != NULL)
        len += my_write_err(err);
    len += my_write_err("\n");
    return len;
}

int my_put3err(char *name, char *name2, char *err)
{
    int len = 0;

    if (name != NULL) {
        len += my_write_err(name);
        len += my_write_err(": ");
    }
    len += my_puterr(name2, err);
    return len;
}

int my_put4err(char *name, char *name2, char *cause, char *err)
{
    int len = 0;

    if (name != NULL) {
        len += my_write_err(name);
        len += my_write_err(": ");
    }
    return len + my_put3err(name2, cause, err);
}
