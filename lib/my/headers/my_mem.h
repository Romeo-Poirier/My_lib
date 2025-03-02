/*
** EPITECH PROJECT, 2025
** My_lib
** File description:
** my_mem
*/

#ifndef INCLUDED_MY_MEM_H
    #define INCLUDED_MY_MEM_H
    #include <unistd.h>
    #include <stdlib.h>
//allocate nmemb of size bytes and initialize them to NULL
//RETURN VALUE:
//on success: pointer to the allocated memory
//on error: NULL
void *my_calloc(int nmemb, int bytes);

//free a list of str
//RETURN VALUE:
//on succes: NULL
char **free_strtab(char **tab);

#endif
