/*
** EPITECH PROJECT, 2024
** My_lib
** File description:
** free_linked_list
*/

#include "../headers/my_linked_list.h"

void free_cell(linked_list_t *list, cell_t *cell)
{
    if (list == NULL || cell == NULL)
        return;
    if (cell->prev != NULL)
        cell->prev->next = cell->next;
    if (cell->next != NULL)
        cell->next->prev = cell->prev;
    free(cell);
}

void free_linked_list(linked_list_t *list)
{
    cell_t *current = NULL;
    cell_t *next = NULL;

    if (list == NULL)
        return;
    current = list->head;
    while (current != NULL) {
        next = current->next;
        free_cell(list, current);
        current = next;
    }
    free(list);
}
