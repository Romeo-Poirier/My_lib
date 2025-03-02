##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## general Makefile
##

SRC := main.c
SRC += $(wildcard src/*.c)

NAME = main

CFLAGS = -Wall -Wextra -iquote include

LDFLAGS = -L lib/ -lmy

all:    mylib $(NAME)

mylib:
	make -C lib/my all

$(NAME):
	gcc -o $(NAME) $(SRC) $(LDFLAGS) $(CFLAGS)

clean:
	make -C lib/my fclean

fclean: clean
	rm -f libmy.a
	rm -f $(NAME)

re:     fclean all
