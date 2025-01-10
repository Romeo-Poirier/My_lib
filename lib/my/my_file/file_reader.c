/*
** EPITECH PROJECT, 2025
** my_radar_v0.1
** File description:
** file_reader
*/

#include "../headers/my_mem.h"
#include "../headers/my_file.h"
#include <stdlib.h>

static int read_setup_error(int fd, int file_len)
{
    if (fd == -1 || file_len == -1) {
        if (fd != -1)
            close_file(fd);
        return 1;
    }
    return 0;
}

char *read_file(char *path)
{
    int fd = open_file(path);
    int file_len = get_file_size(path);
    char *buffer = NULL;

    if (read_setup_error(fd, file_len))
        return NULL;
    buffer = my_calloc(file_len + 1, sizeof(char));
    if (buffer == NULL) {
        write(STDERR_FILENO, "read_file: malloc fail\n", 23);
        close_file(fd);
        return NULL;
    }
    if (read(fd, buffer, file_len) == -1) {
        write(STDERR_FILENO, "read_file: read fail\n", 21);
        free(buffer);
        close_file(fd);
        return NULL;
    }
    close_file(fd);
    return buffer;
}
