/*
** EPITECH PROJECT, 2024
** put in linked list
** File description:
** puts something in a linked list
*/

#include "../headers/my_linked_list.h"
#include "../headers/my_str.h"

int my_put_in_linked_list(linked_list_t **list, char *av)
{
    struct linked_list *element;

    element = malloc(sizeof(*element));
    if (element == NULL)
        return -1;
    element->data = av;
    element->next = *list;
    *list = element;
    return 0;
}

void my_show_linked_list(linked_list_t *list)
{
    struct linked_list *cell;

    cell = list;
    while (cell != NULL) {
        my_putstr(cell->data);
        cell = cell->next;
    }
}

linked_list_t *my_params_to_linked_list(int ac, char *const *av)
{
    struct linked_list *list_head;

    list_head = NULL;
    for (int i = 0; i < ac; i++) {
        my_put_in_linked_list(&list_head, av[i]);
    }
    return list_head;
}
