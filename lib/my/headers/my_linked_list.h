/*
** EPITECH PROJECT, 2024
** my_linked_list.h
** File description:
** my linked list lib
*/

#ifndef MY_LINKED_LIST_H
    #define MY_LINKED_LIST_H
    #include <stddef.h>
    #include <stdlib.h>
typedef struct cell_s {
    struct cell_s *prev;
    void *data;
    struct cell_s *next;
} cell_t;

typedef struct linked_list_s {
    cell_t *head;
    cell_t *tail;
} linked_list_t;

linked_list_t *init_linked_list(void);
linked_list_t *add_as_head(linked_list_t *list, void *data);
linked_list_t *add_as_tail(linked_list_t *list, void *data);
void free_cell(linked_list_t *list, cell_t *cell);
void free_linked_list(linked_list_t *list);
int show_str_list(linked_list_t *head);
#endif /* MY_LINKED_LIST_H */
