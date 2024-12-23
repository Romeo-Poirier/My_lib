/*
** EPITECH PROJECT, 2024
** my_str.h
** File description:
** my str lib
*/

#ifndef MY_STR_H
    #define MY_STR_H

//my_*len.c
int my_strlen(char const *str);
int mstrn_to_clen(char const *str, int n, char c);
int my_intlen(int nb);
int my_llilen(long long int nb);

//my_findstr.c
int my_strstr(char *str, char const *to_find);

//my_is*.c
int my_char_isalpha(char const c);
int my_char_isfence(char const c);
int my_char_islower(char const c);
int my_char_isnumer(char const c);
int my_char_isprint(char const c);
int my_char_isupper(char const c);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnumer(char const *str);
int my_str_isprint(char const *str);
int my_str_isupper(char const *str);

//my_put*.c
int my_putchar(char const c);
int my_putint(int nb);
int my_putlli(long long int nb);
int my_putstr(char const *str);
int my_putstr_i_end(char const *str, int i, int end);

//my_revstr.c
char *my_revstr(char *str);

//my_str| capitalize | upcase | lowcase |.c
char *my_strcapitalize(char *str);
char *my_strlowcase(char *str);
char *my_strupcase(char *str);

//my_str_to_arr.c
//int my_nb_words(char *str);

//my_strcat.c
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *mstrn_to_mcat(char *dest, char const *src, int n, int m);

//my_strcmp.c
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);

//my_strcpy.c
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *mstrn_to_ccpy(char *dest, char const *src, int n, char c);
char *mstrn_to_mcpy(char *dest, char const *src, int n, int m);

#endif /* MY_STR_H */
