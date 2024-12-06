/*
** EPITECH PROJECT, 2024
** My_lib
** File description:
** show_linked_list
*/

#include "../headers/my_linked_list.h"
#include <unistd.h>
#include <string.h>

int show_str_list(linked_list_t *list)
{
    cell_t *cell = list->head;
    char *str = NULL;

    while (cell != NULL) {
        str = (char *) cell->data;
        write(1, str, strlen(str));
        cell = cell->next;
    }
    return 0;
}
