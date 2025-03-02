/*
** EPITECH PROJECT, 2025
** my_radar_v0.1
** File description:
** my_files
*/

#ifndef MY_FILES_H
    #define MY_FILES_H
    #include <unistd.h>

//create [filepath] with [mode] rights, if [filepath] already exist, empties it
//opens [filepath] with write only access and close is if [close] is set to 1.
//RETURN VALUE:
//on success: file descriptor or 0 if [close] is 1
//on error: -1
int create_file(char *filepath, int mode, int close);
//open file at [filepath] with read and write access
//RETURN VALUE:
//on success: file descriptor
//on error: -1
int open_file(char const *filepath);
//close [fd] file descriptor
//RETURN VALUE:
//on success: 0
//on error: -1
int close_file(int fd);

//read file at [filepath] and write its content in a string
//RETURN VALUE:
//on success: pointer to malloc'd string
//on error: NULL
char *read_file(char *filepath);

//get the size of file at [filepath] in bytes
//RETURN VALUE:
//on succes: size of [filepath]
//on error: -1
int get_file_size(char *filepath);

#endif /* MY_FILE_H */
