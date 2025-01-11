/*
** EPITECH PROJECT, 2025
** my_radar_v0.1
** File description:
** my_files
*/

#ifndef MY_FILES_H
    #define MY_FILES_H
    #include <unistd.h>


//file_open_close.c

//return file descriptor
int open_file(char const *filepath);
//close file descriptor
int close_file(int fd);

//read_file.c

//read the file at path and return malloc'd buffer with the file written in it
char *read_file(char *path);

//getters

//return the size of the file at path in bytes
int get_file_size(char *path);

#endif /* MY_FILE_H */
