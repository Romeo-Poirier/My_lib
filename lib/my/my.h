/*
** EPITECH PROJECT, 2024
** my lib include
** File description:
** all prototypes of the functions in my lib
*/

#include <stdarg.h>

#ifndef MY_LIB_INCLUDE
    #define MY_LIB_INCLUDE
typedef struct linked_list {
    void *data;
    struct linked_list *next;
} linked_list_t;
int my_char_isalpha(char const c);
int my_putchar(char c);
int my_fchar(int width, int int_arg);
int my_isneg(int nb);
int my_put_nb(long long int nb);
int my_put_nbr(int nb);
int my_fnbr(int width, int nb);
void my_swap(int *a, int *b);
int my_putstr(char *str);
int my_fstr(int width, char *str);
int my_putstr_i_end(const char *str, int i, int end);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_getnbr_from(const char *str, int i);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *mstrn_to_mcpy(char *dest, char const *src, int n, int m);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_char_isnum(char c);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *mstrn_to_mcat(char *dest, char const *src, int n, int m);
char **my_str_to_array(char const *str);
int my_show_word_array(char *const *tab);
int my_put_in_linked_list(struct linked_list **list, char *av);
void my_show_linked_list(struct linked_list *list);
struct linked_list *my_params_to_linked_list(int ac, char *const *av);
void my_rev_linked_list(linked_list_t **begin);
int my_linked_list_size(linked_list_t const *begin);
int base_switcher(int nb, int base);
int base_switcher_maj(int nb, int base);
int base_switcher_size(int nb, int size);
int mod_x(int width, int nb);
int mod_x_maj(int width, int nb);
int mod_o(int width, int nb);
int mod_f_maj_f(int width, double nb, int precision);
int mod_e_maj_e(int width, double nb, int precision);
int mod_e(double nb, int precision);
int mod_e_size(double nb, int precision);
int mod_f(double nb, int precision);
int mod_f_size(double nb, int precision);
int mod_p(int width, void *p);
int mod_g(int width, double nb, int precision);
int mod_f_g(double nb, int precision, int width);
int mod_u(int width, int nb);
int my_count_digit(long long int nb);
int my_count_digits(int nb);
int padding(int arg_size, int width);
int width_manager(const char *format, int i, va_list list);
int my_printf(const char *format, ...);
#endif /* MY_LIB_INCLUDE */
