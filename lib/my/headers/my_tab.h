/*
** EPITECH PROJECT, 2025
** my_lib
** File description:
** my_tab
*/

#ifndef MY_TAB_H
    #define MY_TAB_H
    #include <stddef.h>
    #include "my_str.h"
//return the length of tab
//RETURN VALUE:
//length of tab
int str_tablen(char **tab);

//return a malloc'd duplicate
//RETURN VALUE:
//on success: malloc'd duplicate of tab
//on error: NULL
char **str_tabdup(char **tab);

//display a char **; all elements of tab will be display seperated by seperator
//separator can be NULL to use default: ", "
//RETURN VALUE:
//length of the displayed output
int str_puttab(char **tab, char *separator);

//allocate a list of str of [nmemb] members, duplicates all str into new list
//free [tab]
//if an error occures, [tab] is unchanged
//RETURN VALUE:
//on success: pointer to str list
//on error: NULL
char **str_extendtab(char **tab, int nmemb);
#endif /* MY_TAB_H */
