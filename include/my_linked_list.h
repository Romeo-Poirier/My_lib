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
typedef struct linked_list {
    void *data;
    struct linked_list *next;
} linked_list_t;
int my_link_list_size(linked_list_t const *begin);
int my_put_in_linked_list(linked_list_t **list, char *av);
void my_show_linked_list(linked_list_t *list);
linked_list_t *my_params_to_linked_list(int ac, char *const *av);
#endif /* MY_LINKED_LIST_H */
