/*
** EPITECH PROJECT, 2024
** put in linked list
** File description:
** puts something in a linked list
*/

#include <stddef.h>
#include "my.h"
#include <stdlib.h>

int my_put_in_linked_list(struct linked_list **list, char *av)
{
    struct linked_list *element;

    element = malloc(sizeof(*element));
    element->data = av;
    element->next = *list;
    *list = element;
    return 0;
}

void my_show_linked_list(struct linked_list *list)
{
    struct linked_list *cell;

    cell = list;
    while (cell != NULL) {
        my_putstr(cell->data);
        cell = cell->next;
    }
}

struct linked_list *my_params_to_linked_list(int ac, char *const *av)
{
    struct linked_list *list_head;

    list_head = NULL;
    for (int i = 0; i < ac; i++) {
        my_put_in_linked_list(&list_head, av[i]);
    }
    return list_head;
}
