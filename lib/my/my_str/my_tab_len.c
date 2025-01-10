/*
** EPITECH PROJECT, 2024
** my_radar_v0.1
** File description:
** my_tab_len
*/

#include <stddef.h>
#include <unistd.h>

int char_tab_len(char **tab)
{
    int i = 0;

    if (tab == NULL) {
        write(STDERR_FILENO, "char_tab_len: tab doesn't exist\n", 32);
        return -1;
    }
    while (tab[i] != NULL)
        i++;
    return i;
}
