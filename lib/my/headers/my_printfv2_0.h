/*
** EPITECH PROJECT, 2025
** My_lib
** File description:
** my_printfv2.0
*/

#ifndef MY_PRINTFV2_0_H
    #define MY_PRINTFV2_0_H
    #include <stdarg.h>
    #include <stddef.h>
/*format_t contains:
flags: string with all flags
width: min width
precision: max len of str or numbers after the dot
len_mod: type length modifier
current_len: current number of characters written
*/
typedef struct format_s {
    char *flags;
    int width;
    int precision;
    char *len_mod;
    int current_len;
}format_t;

/*specifier_t contains:
letter: the specifier
func: the function assigned to specifier
*/
typedef struct sprecifier_s {
    char letter;
    char *(*func)(va_list list, format_t *format);
}specifier_t;

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
    ~d   write a signed int~
    ~i   write a signed int~
    ~o   write unsigned int in base 8 (octal)~
    ~u   write unsigned int in base 10 (decimal)~
    ~x   write unsigned int in base 16 (hexadecimal)~
    ~X   write unsigned int in base 16 (HEXADECIMAL)~
    ~e   write rounded double in style [-]d.ddde±dd (scientific)~
    ~E   write rounded double in style [-]d.dddE±dd (scientific)~
    ~f   write rounded double in style [-]ddd.ddd~
    ~F   write rounded double in style [-]ddd.ddd~
    ~g   write in f or e style depending on result and precision~
    ~G   write in F or E style depending on result and precision~
    ~a   write double in style [-]0xh.hhhhp±d (hexadecimal)~
    ~A   write double in style [-]0Xh.hhhhP±d (HEXADECIMAL)~
    ~c   write a unsigned char character~
    ~s   write a const char *string~
    ~p   write the void * pointer arg in hexadecimal~
    ~n   the number of written characters so far is stored in the int *arg~
    ~%   write a '%'. no argument needed.~
*/
int my_printfv2(const char *format, ...);

//funcs for printf
//malloc a format_t struct, set everything to 0 and current_len to len
format_t *init_format_t(int len);
//free a format_t struct
void free_arg_format(format_t *arg_format);
/*fill a format_t struct with corresponding elements from the format.
mft should be */
format_t *mod_parsing(char const *mft, format_t *arg_format, va_list list);

#endif /* MY_PRINTFV2_0_H*/
