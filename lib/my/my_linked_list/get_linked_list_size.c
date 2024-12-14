/*
** EPITECH PROJECT, 2024
** organized_v0.1
** File description:
** get_linked_list_size
*/

#include <unistd.h>
#include "../headers/my_linked_list.h"

int get_linked_list_size(linked_list_t *list)
{
    cell_t *cell = NULL;
    int i = 0;

    if (list->head == NULL)
        return 0;
    cell = list->head;
    while (cell != NULL) {
        i++;
        cell = cell->next;
    }
    return i;
}

cell_t *get_cell_at(linked_list_t *list, int n)
{
    cell_t *cell = list->head;
    int rev = 0;

    if (n < 0) {
        cell = list->tail;
        n *= -1;
        rev = 1;
    }
    for (int i = 0; i < n && cell != NULL; i++) {
        if (!rev)
            cell = cell->next;
        else
            cell = cell->prev;
    }
    if (cell == NULL)
        write(2, "get_cell_at: cell is NULL\n", 26);
    return cell;
}

void *get_data_at(linked_list_t *list, int n)
{
    return get_cell_at(list, n)->data;
}
