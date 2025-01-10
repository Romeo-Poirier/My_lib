/*
** EPITECH PROJECT, 2025
** my_radar_v0.1
** File description:
** get_file_size
*/

#include "../headers/my_file.h"
#include <sys/stat.h>

int get_file_size(char *path)
{
    struct stat info;

    if (stat(path, &info) == -1) {
        write(STDERR_FILENO, "get file size: stat error\n", 26);
        return -1;
    }
    return info.st_size;
}
