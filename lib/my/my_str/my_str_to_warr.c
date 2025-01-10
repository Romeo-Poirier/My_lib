/*
** EPITECH PROJECT, 2025
** my_radarv0.2
** File description:
** my_str_to_word_array
*/

#include "../headers/my_printf.h"
#include "../headers/my_str.h"
#include "../headers/my_mem.h"
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

int my_nb_words(char *str)
{
    int words = 0;

    if (str == NULL)
        return 0;
    if (my_strlen(str) == 0)
        return 0;
    for (int i = 0; str[i + 1] != '\0'; i++) {
        if (i >= 1 && !my_char_isfence(str[i]) && my_char_isfence(str[i - 1]))
            words++;
        if (i == 0 && !my_char_isfence(str[i]) && my_char_isfence(str[i + 1]))
            words++;
    }
    return words;
}

void free_warr(char **warr)
{
    if (warr == NULL)
        return;
    for (int i = 0; warr[i] != NULL; i++) {
        free(warr[i]);
    }
    free(warr);
}

static int add_word(char *word, char *str, int i, int Wlen)
{
    if (word == NULL)
        return 1;
    mstrn_to_mcpy(word, str, i - Wlen, i - 1);
    return 0;
}

int on_word(int *Wlen, char *str, int i)
{
    if (my_char_isalnum(str[i])) {
        *Wlen += 1;
        return 1;
    }
    return 0;
}

static int fill_warr(char **warr, char *str, int nb_words)
{
    int tab_i = 0;
    int Wlen = 0;
    int error = 0;
    int i = -1;

    do {
        i++;
        if (on_word(&Wlen, str, i))
            continue;
        if (Wlen != 0) {
            warr[tab_i] = my_calloc(Wlen + 1, sizeof(char));
            error = add_word(warr[tab_i], str, i, Wlen);
            Wlen = 0;
            tab_i++;
        }
        if (error)
            return 1;
    } while (tab_i < nb_words && str[i] != '\0');
    return 0;
}

char **str_to_warr(char *str)
{
    int nb_words = 0;
    char **warr = NULL;
    int error = 0;

    if (str == NULL)
        return NULL;
    nb_words = my_nb_words(str);
    if (my_strlen(str) == 0 || nb_words == 0)
        return NULL;
    warr = my_calloc(nb_words + 1, sizeof(char *));
    if (warr == NULL)
        return NULL;
    error = fill_warr(warr, str, nb_words);
    if (error) {
        free_warr(warr);
        return NULL;
    }
    return warr;
}
