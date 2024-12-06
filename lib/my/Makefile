##
## EPITECH PROJECT, 2024
## makefile d10
## File description:
## better builder
##

SRC = my_linked_list/add_to_linked_list.c \
    my_linked_list/free_linked_list.c \
    my_linked_list/show_linked_list.c \
    my_math/base_switcher.c \
    my_math/my_find_prime_sup.c \
    my_math/my_getnbr.c \
    my_math/my_isneg.c \
    my_math/my_isprime.c \
    my_math/my_power.c \
    my_math/my_sort_int_array.c \
    my_math/my_square_root.c \
    my_str/my_count_nbr.c \
    my_str/my_findstr.c \
    my_str/my_isalpha.c \
    my_str/my_islower.c \
    my_str/my_isnumer.c \
    my_str/my_isprint.c \
    my_str/my_isupper.c \
    my_str/my_putchar.c \
    my_str/my_putnbr.c \
    my_str/my_putstr.c \
    my_str/my_revstr.c \
    my_str/my_strcapitalize.c \
    my_str/my_strcat.c \
    my_str/my_strcmp.c \
    my_str/my_strcpy.c \
    my_str/my_strlen.c \
    my_str/my_strlowcase.c \
    my_str/my_strupcase.c

OBJ = $(SRC:.c=.o)

CFLAGS = -L . -lmy

LFLAGS = -Wall -Wextra

NAME = libmy.a

all: $(NAME)

$(NAME):    $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp libmy.a ../
	mkdir -p ../../include
	cp -f headers/*.h ../../include/

clean:
	rm -f $(OBJ)

fclean: clean
	rm ../libmy.a
	rm -f $(NAME)

re: fclean all
