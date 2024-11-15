/*
** EPITECH PROJECT, 2024
** printf header
** File description:
** for the struct i use in my printf
*/

#ifndef MY_PRINTF
    #define MY_PRINTF
typedef struct sflag_s {
    char letter;
    int (*func_of)(int, int);
}sflag_t;
#endif /* MY_PRINTF */
