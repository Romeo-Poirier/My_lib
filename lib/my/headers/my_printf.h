/*
** EPITECH PROJECT, 2024
** printf header
** File description:
** for the struct i use in my printf
*/

#ifndef MY_PRINTF
    #define MY_PRINTF
    #include <stdarg.h>
typedef struct sflag_s {
    char letter;
    int (*func_of)(int, int);
}sflag_t;
int mod_e_size(double nb, int precision);
int mod_e(double nb, int precision);
int mod_f_maj_f(int width, double nb, int precision);
int mod_e_maj_e(int width, double nb, int precision);
int mod_f_g(double nb, int precision, int width);
int mod_f_size(double nb, int precision);
int mod_f(double nb, int precision);
int mod_g(int width, double nb, int precision);
int mod_o(int width, int nb);
int mod_p(int width, void *p);
int mod_u(int width, int nb);
int mod_x(int width, int nb);
int mod_x_maj(int width, int nb);
int my_fnbr(int width, int nb);
int my_fchar(int width, int int_arg);
int my_fstr(int width, char *str);
int padding(int arg_size, int width);
int width_manager(const char *format, int i, va_list list);

int my_printf(const char *format, ...);
#endif /* MY_PRINTF */
