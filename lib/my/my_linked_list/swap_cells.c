/*
** EPITECH PROJECT, 2024
** organized_v0.1
** File description:
** linked_list_swap
*/

#include "../headers/my_linked_list.h"

void swap_cells(cell_t *c1, cell_t *c2)
{
    void *tmp = c1->data;

    c1->data = c2->data;
    c2->data = tmp;
}
