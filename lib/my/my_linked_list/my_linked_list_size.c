/*
** EPITECH PROJECT, 2024
** my list size
** File description:
** returns the size of a linked list
*/

#include "../headers/my_linked_list.h"

int my_link_list_size(linked_list_t const *begin)
{
    int i = 0;

    while (begin != NULL) {
        i++;
        begin = begin->next;
    }
    return i;
}
