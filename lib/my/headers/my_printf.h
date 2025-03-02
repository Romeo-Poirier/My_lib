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

/*print format and all args in the standard output.
return the length of what was printed or -1 if an error occured.
crossed out ~text~ means format is not yet available and will be ignored.
way to write a format for an arg:
    %[flags][width][.precision][length modifier]specifier
accepted formats for arguments:
flags:
    none
width:
    int
.precision:
    int
length_modifiers:
    none
specifiers:
    d   write a signed int
    i   write a signed int
    o   write unsigned int in base 8 (octal)
    u   write unsigned int in base 10 (decimal)
    x   write unsigned int in base 16 (hexadecimal)
    X   write unsigned int in base 16 (HEXADECIMAL)
    e   write rounded double in style [-]d.ddde±dd (scientific)
    E   write rounded double in style [-]d.dddE±dd (scientific)
    f   write rounded double in style [-]ddd.ddd
    F   write rounded double in style [-]ddd.ddd
    g   write in f or e style depending on result and precision
    G   write in F or E style depending on result and precision
    a   write double in style [-]0xh.hhhhp±d (hexadecimal)
    A   write double in style [-]0Xh.hhhhP±d (HEXADECIMAL)
    c   write a unsigned char character
    s   write a const char *string
    p   write the void * pointer arg in hexadecimal
    n   the number of written characters so far is stored in the int *arg
    %   write a '%'. no argument needed.
*/
int my_printf(char *format, ...);
#endif /* MY_PRINTF */
