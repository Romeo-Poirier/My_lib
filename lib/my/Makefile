##
## EPITECH PROJECT, 2024
## makefile d10
## File description:
## better builder
##

SRC =  my_str/my_putchar.c \
    my_str/my_strlen.c \
    my_swap.c \
    my_is_prime.c \
    my_compute_power_rec.c \
    my_compute_square_root.c \
    my_find_prime_sup.c \
    my_getnbr.c \
    my_isneg.c \
    my_put_nbr.c \
    my_str/my_putstr.c \
    my_str/my_revstr.c \
    my_showmem.c \
    my_str/my_showstr.c \
    my_show_word_array.c \
    my_sort_int_array.c \
    my_str/my_strcapitalize.c \
    my_str/my_strcat.c \
    my_str/my_strcmp.c \
    my_str/my_strcpy.c \
    my_str/my_isalpha.c \
    my_str/my_islower.c \
    my_str/my_isnum.c \
    my_str/my_isprintable.c \
    my_str/my_isupper.c \
    my_str/my_strlowcase.c \
    my_str/my_findstr.c \
    my_str/my_str_to_word_array.c \
    my_str/my_strupcase.c \
    my_params_to_linked_list.c \
    my_linked_list_size.c \
    my_rev_linked_list.c \
    base_switcher.c \
    mod_x_o.c \
    mod_f_e.c \
    mod_f.c \
    mod_e.c \
    mod_e_size.c \
    mod_p.c \
    mod_g.c \
    mod_f_for_g.c \
    mod_u.c \
    print_managers.c \
    mod_managers.c \
    my_printf.c

OBJ = $(SRC:.c=.o)

LDFLAGS = -L./ -lmy

LFLAGS = -Wall -Wextra

NAME = libmy.a

all: $(NAME)

$(NAME):    $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp libmy.a ../
	mkdir -p ../../include
	cp -f my.h ../../include/my.h
	cp -f my_printf.h ../../include/my_printf.h

clean:
	rm -f $(OBJ)

fclean: clean
	rm ../libmy.a
	rm -f $(NAME)

re: fclean all
