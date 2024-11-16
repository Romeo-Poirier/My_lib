/*
** EPITECH PROJECT, 2024
** my list size
** File description:
** returns the size of a linked list
*/

#include <stddef.h>
#include "my.h"

int my_link_list_size(linked_list_t const *begin)
{
    int i = 0;

    while (begin != NULL) {
        i++;
        begin = begin->next;
    }
    return i;
}
