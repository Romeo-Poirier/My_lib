/*
** EPITECH PROJECT, 2024
** my_str.h
** File description:
** my str lib
*/

#ifndef MY_STR_H
    #define MY_STR_H

//my_*len.c

//return the length of str
int my_strlen(char const *str);
//return the length from n to the first encountered character that is in c
int mstrn_to_clen(char const *str, int n, char *c);
//return the number of digits of an int
int my_intlen(int nb);
//return the number of digits of a long long int
int my_llilen(long long int nb);


//my_findstr.c

//return the first index where to_find was found in str or -1 if not found
int my_strstr(char *str, char const *to_find);


//my_is*.c

//return 1 if c is found inside str, else return 0
int my_char_is_in(char c, char *str);
//return 1 if c is a letter or a number, else return 0
int my_char_isalnum(char const c);
//return 1 if c is a letter, else return 0
int my_char_isalpha(char const c);
//return 1 if c isn't a letter nor a number, else return 0
int my_char_isfence(char const c);
//return 1 if c is lowercase letter, else return 0
int my_char_islower(char const c);
//return 1 if c is a number, else return 0
int my_char_isnumer(char const c);
//return 1 if c is printable, else return 0
int my_char_isprint(char const c);
//return 1 if c is uppercase letter, else return 0
int my_char_isupper(char const c);
//return 1 if str only consists of letters and numbers, else return 0
int my_str_isalnum(char const *str);
//return 1 if str only consists of letters, else return 0
int my_str_isalpha(char const *str);
//return 1 if str only consists of lowercase letters, else return 0
int my_str_islower(char const *str);
//return 1 if str only consists of numbers, else return 0
int my_str_isnumer(char const *str);
//return 1 if str only consists of printable characters, else return 0
int my_str_isprint(char const *str);
//return 1 if str only consists of uppercase letters, else return 0
int my_str_isupper(char const *str);

//my_put*.c

//display a character in the standard output, return 1
int my_putchar(char const c);
//display an int in the standard output, return length of nb
int my_putint(int nb);
//display a long long int in the standard output, return length of nb
int my_putlli(long long int nb);
//display str in the standard output, return length of str
int my_putstr(char const *str);
//display str from i to end in the standard output, return end - i
int my_putstr_i_end(char const *str, int i, int end);


//my_revstr.c

//reverse str
char *my_revstr(char *str);


//my_str| capitalize | upcase | lowcase |.c

//the first letter of every word becomes uppercase
char *my_strcapitalize(char *str);
//all letters become lowercase
char *my_strlowcase(char *str);
//all letters become uppercase
char *my_strupcase(char *str);


//my_str_to_warr.c

//turn str into a malloc'd word array
char **str_to_warr(char *str);
//free a word array
void free_warr(char **warr);

//my_nb_words.c

//return the number of words in str
int my_nb_words(char *str);


//my_strcat.c

/*concatenates src at the end of dest.
dest needs to be of correct size*/
char *my_strcat(char *dest, char const *src);
/*concatenates src up to n at the end of dest.
dest needs to be of correct size*/
char *my_strncat(char *dest, char const *src, int n);
/*concatenates src from n to m at the end of dest.
dest needs to be of correct size*/
char *mstrn_to_mcat(char *dest, char const *src, int n, int m);


//my_strcmp.c

/*compare s1 and s2, return the difference s1's char - s2's char using ascii.
return 0 if no different characters encountered*/
int my_strcmp(char const *s1, char const *s2);
/*compare s1 and s2 up to n, return the difference s1's char - s2's char
using ascii. return 0 if no different characters encountered*/
int my_strncmp(char const *s1, char const *s2, int n);


//my_strcpy.c

/*copy src into dest.
dest needs to be of correct size*/
char *my_strcpy(char *dest, char const *src);
/*copy src up to n into dest.
dest needs to be of correct size*/
char *my_strncpy(char *dest, char const *src, int n);
/*copy src from n to c (or the end of src if c isn't encountered) into dest.
dest needs to be of correct size*/
char *mstrn_to_ccpy(char *dest, char const *src, int n, char c);
/*copy src from n to m into dest.
dest needs to be of correct size*/
char *mstrn_to_mcpy(char *dest, char const *src, int n, int m);


//my_tab_len.c

//return the number of items in tab
int char_tab_len(char **tab);
#endif /* MY_STR_H */
