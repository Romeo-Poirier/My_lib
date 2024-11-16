/*
** EPITECH PROJECT, 2024
** my_str.h
** File description:
** my str lib
*/

#ifndef MY_STR_H
    #define MY_STR_H
int my_char_isalpha(char const c);
int my_char_islower(char const c);
int my_char_isnumer(char const c);
int my_char_isprint(char const c);
int my_char_isupper(char const c);
int my_count_int(int nb);
int my_count_lli(long long int nb);
int my_putchar(char const c);
int my_putint(int nb);
int my_putlli(long long int nb);
int my_putstr(char const *str);
int my_putstr_i_end(char const *str, int i, int end);
char *my_revstr(char *str);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnumer(char const *str);
int my_str_isprint(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *mstrn_to_mcat(char *dest, char const *src, int n, int m);
char *mstrn_to_mcpy(char *dest, char const *src, int n, int m);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
int my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
#endif /* MY_STR_H */
