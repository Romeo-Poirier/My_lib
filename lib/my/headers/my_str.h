/*
** EPITECH PROJECT, 2024
** my_str.h
** File description:
** my str lib
*/

#ifndef MY_STR_H
    #define MY_STR_H
    #include <stddef.h>

//my_*len.c

//return the length of str
int my_strlen(char *str);
//return the length from n to the first encountered character that is in c
int mstrn_to_clen(char *str, int n, char *c);
//return the number of digits of an int
int my_intlen(int nb);
//return the number of digits of a long long int
int my_llilen(long long int nb);


//my_nullify.c

//set any character to [\0] from [n] until [c] is met
//[backwards] can be set to 1 to go from n to start of string
//or can be set to 0 to go from n to end of string
//if [c] is never encountered, will nullify form n to end or start
//if src is NULL, the function succeeds
//RETURN VALUE:
//on success: 0
//on error: 1 (backwards had invalid value)
int nullify_from_till(char *src, int n, char c, int backward);

//my_findstr.c

//return the first index where to_find was found in str or -1 if not found
int my_strstr(char *str, char *to_find);


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
//verify str only contains alphanumeric or given special characters
//specials can be NULL but if it is NULL you should use my_str_isalnum
//RETURN VALUE:
//if str is only alphanum and specials: 1
//else: 0
int my_str_isalnum_and(char *str, char *specials);
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

//display str in the standard output
int my_write_err(char *str);
//display [name: name2: cause: err\n] in the standard error output
int my_put4err(char *name, char *name2, char *cause, char *err);
//display [name: name2: err\n] in the standard error output
int my_put3err(char *name, char *name2, char *err);
//display [name: err\n] in the standard error output
int my_puterr(char *name, char *err);
//display a character in the standard output, return 1
int my_putchar(char const c);
//display an int in the standard output, return length of nb
int my_putint(int nb);
//display a long long int in the standard output, return length of nb
int my_putlli(long long int nb);
//display str in the standard output, return length of str
int my_putstr(char *str);
//display str from i to end in the standard output, return end - i
int my_putstr_i_end(char *str, int i, int end);

//copy nb into a malloc'd string
//RETURN VALUE:
//on success: pointer to malloc'd string
//on error: NULL
char *int_to_str(int nb);

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
//separator can be NULL to use defaults
//RETURN VALUE:
//on success: pointer to allocated word array
//on error: NULL
char **str_to_warr(char *str, char *separator);
//turn str, starting at index n, into a malloc'd word array
//separator can be NULL to use defaults
//RETURN VALUE:
//on success: pointer to allocated word array
//on error: NULL
char **str_to_warr_from(char *str, char *separator, int n);
//free a word array
void free_warr(char **warr);

//my_nb_words.c

/*return the number of words in str
separator can be set to NULL to use default
or use custom separators defined in a string
*/
int my_nb_words(char *str, char *separator);



//my_strcat.c

/*concatenates src at the end of dest.
dest needs to be of correct size*/
char *my_strcat(char *dest, char *src);
/*concatenates src up to n at the end of dest.
dest needs to be of correct size*/
char *my_strncat(char *dest, char *src, int n);
/*concatenates src from n to m - 1 at the end of dest.
dest needs to be of correct size*/
char *mstrn_to_mcat(char *dest, char *src, int n, int m);


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
char *my_strcpy(char *dest, char *src);
/*copy src up to n into dest.
dest needs to be of correct size*/
char *my_strncpy(char *dest, char *src, int n);
/*copy src from n to c (or the end of src if c isn't encountered) into dest.
dest needs to be of correct size*/
char *mstrn_to_ccpy(char *dest, char *src, int n, char c);
/*copy src from n to m into dest.
dest needs to be of correct size*/
char *mstrn_to_mcpy(char *dest, char *src, int n, int m);
//cpy src starting at n into dest
//dest needs to be of correct size
char *my_strcpy_from(char *dest, char *src, int n);

//my_strdup.c

//return a malloc'd copy of src
char *my_strdup(char *src);
//return a malloc'd copy of src starting at n
char *my_strdup_from(char *src, int n);
//copy src until one char inside of [c] is encountered in a malloc'd string
//RETURN VALUE:
//on success: pointer to a malloc'd string
//on error: NULL
char *strdup_till(char *src, char c);
//my_strdupcat.c

//allocate memory to cpy s1 and s2 in a new str
//if s1 is NULL but not s2, is equivalent to my_strdup(s2)
//if s2 is NULL but not s1, is equivalent to my_strdup(s1)
//if both are NULL, return NULL
//RETURN VALUE:
//on success: pointer to malloc'd string
//on error: NULL
char *strdupcat(char *s1, char *s2);

//allocate memory to copy s1, s2 and s3 in a new str
//all arguments need to be different than NULL
//RETURN VALUE:
//on success: pointer to malloc'd string
//on error: NULL
char *strdup2cat(char *s1, char *s2, char *s3);
#endif /* MY_STR_H */
