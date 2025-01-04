/*
** EPITECH PROJECT, 2025
** My_lib
** File description:
** my_calloc
*/

#include <stdlib.h>
#include <unistd.h>

int calloc_in_error(int nmemb, int bytes)
{
    int error = 0;

    if (nmemb <= 0) {
        write(STDERR_FILENO, "my_calloc: invalid number of elements\n", 38);
        error = 1;
    }
    if (bytes <= 0) {
        write(STDERR_FILENO, "my_calloc: invalid size of elements\n", 36);
        error = 1;
    }
    return error;
}

void *my_calloc(int nmemb, int bytes)
{
    void *array = NULL;
    int len = nmemb * bytes;

    if (calloc_in_error(nmemb, bytes))
        return NULL;
    array = malloc(len);
    if (array == NULL) {
        write(STDERR_FILENO, "my_calloc: couldn't allocate memory\n", 36);
        return NULL;
    }
    for (int i = 0; i < len; i++) {
        ((char *) array)[i] = 0;
    }
    return array;
}
