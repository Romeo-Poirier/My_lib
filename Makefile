##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## general Makefile
##

SRC = main.c

NAME = main

FLAGS = -L lib/ -lmy -Wall -Wextra

all:    mylib $(NAME)

mylib:
	make -C lib/my all

$(NAME):
	gcc -o $(NAME) $(SRC) $(FLAGS) -g3

clean:
	make -C lib/my fclean


fclean: clean
	rm -f libmy.a
	rm -f $(NAME)

re:     fclean all
