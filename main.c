/*
** EPITECH PROJECT, 2024
** main
** File description:
** testing the library
*/

#include "include/my_linked_list.h"

int main(void)
{
    linked_list_t *list = init_linked_list();
    char *str = "bruh\n";
    char *s1 = "Hello ";
    char *s2 = "World";
    char *s3 = "!";

    add_as_head(list, s1);
    add_as_tail(list, s2);
    add_as_head(list, s3);
    add_as_tail(list, str);
    show_str_list(list);
    free_linked_list(list);
    return 0;
}
