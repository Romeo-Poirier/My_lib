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
/*cell_t contains:
prev: previous cell in list
data: pointer to what you want to store
next: next cell in list
*/
typedef struct cell_s {
    struct cell_s *prev;
    void *data;
    struct cell_s *next;
} cell_t;

/*linked_list_t contains:
head: first cell of list
tail: last cell of list
*/
typedef struct linked_list_s {
    cell_t *head;
    cell_t *tail;
} linked_list_t;

//return a malloc'd linked list with head and tail initialzed to NULL
linked_list_t *init_linked_list(void);

//add to linked_list.c:

//malloc a new cell at the beginning of the list and store data in it
linked_list_t *add_as_head(linked_list_t *list, void *data);
//malloc a new cell at the end of the list and store data in it
linked_list_t *add_as_tail(linked_list_t *list, void *data);

//swap_cells.c:

//swap the data of c1 and c2
void swap_cells(cell_t *c1, cell_t *c2);

//remove from list / delete list

//free the cell and remove it from the list
void free_cell(linked_list_t *list, cell_t *cell);
//free all remaining cells of the list and free the list
void free_linked_list(linked_list_t *list);

//getters:

//return the number of cells in the list
int get_linked_list_size(linked_list_t *list);
//not functionnal nor verified
cell_t *get_cell_at(linked_list_t *list, int n);
//not functionnal nor verified
void *get_data_at(linked_list_t *list, int n);

//display:

//display all element as str of list starting at the head
int show_str_list(linked_list_t *head);
#endif /* MY_LINKED_LIST_H */
