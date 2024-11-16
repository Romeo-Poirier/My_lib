/*
** EPITECH PROJECT, 2024
** my rev list
** File description:
** reverses the elements of the list
*/

#include "../headers/my_linked_list.h"

void my_rev_linked_list(linked_list_t **begin)
{
    struct linked_list *previous = NULL;
    struct linked_list *current = *begin;
    struct linked_list *tmp;

    while (current != NULL) {
        tmp = current->next;
        current->next = previous;
        previous = current;
        current = tmp;
    }
    *begin = previous;
}
