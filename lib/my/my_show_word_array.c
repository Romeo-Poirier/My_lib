/*
** EPITECH PROJECT, 2024
** my show word array
** File description:
** show each word on a seperate line by adding \n to the word
*/

#include <unistd.h>

static void my_putchar(char c)
{
    write(1, &c, 1);
}

static int my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}

int my_show_word_array(char *const *tab)
{
    char *str;
    int total_len = 0;

    for (int i = 0; tab[i] != 0; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return 0;
}
