/*
** EPITECH PROJECT, 2024
** my str to word array
** File description:
** splits str into a list, seperators are all non-alphanumerical chars
** return a new array
*/

#include <stdlib.h>
#include "../my.h"

static int my_char_isalphanumeric(char c)
{
    if (c >= 48 && c <= 57)
        return 1;
    if (c >= 65 && c <= 90)
        return 1;
    if (c >= 97 && c <= 122)
        return 1;
    return 0;
}

static char *my_str_n_to_n1_cpy(char *dest, char const *src, int n, int n1)
{
    if (n < 0)
        return 0;
    for (int i = n; i <= n1; i++)
        dest[i - n] = src[i];
    dest[n1 - n + 1] = '\0';
    return dest;
}

int my_count_words(char const *str)
{
    int i_str = 0;
    int words = 0;

    for (int i = 0; i < my_strlen(str); i++) {
        if (my_char_isalphanumeric(str[i]) == 1)
            i_str++;
        if (i_str > 0 && my_char_isalphanumeric(str[i]) == 0) {
            words++;
            i_str = 0;
        }
        if (i_str <= 0 && my_char_isalphanumeric(str[i]) == 0)
            i_str = 0;
    }
    return words;
}

void find_n_add_word(char **tab, char const *str, int *n, int *tab_i)
{
    int i = *n;

    while (my_char_isalphanumeric(str[i]) == 1) {
        i++;
    }
    tab[*tab_i] = malloc(sizeof(char) * (i - *n + 1));
    my_str_n_to_n1_cpy(tab[*tab_i], str, *n, i - 1);
    *n = i;
}

char **my_str_to_word_array(char const *str)
{
    int tab_i = 0;
    int i_tmp_str = 0;
    char **tab = malloc(sizeof(char *) * my_count_words(str) + sizeof(int));

    if (tab == NULL)
        return NULL;
    for (int i = 0; i < my_strlen(str); i++) {
        if (my_char_isalphanumeric(str[i]) == 1) {
            find_n_add_word(tab, str, &i, &tab_i);
            tab_i++;
        }
    }
    tab[my_count_words(str) + 1] = 0;
    return tab;
}
