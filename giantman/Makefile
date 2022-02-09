##
## EPITECH PROJECT, 2022
## Giantman
## File description:
## Makefile
##

CC= gcc
RM = rm -rf
CFLAGS := -W -Wall -g3 -Iinclude
NAME = giantman

SRC			=		main.c		\
					basic.c		\
					my_get.c	\
					my_put.c	\
					my_str.c

$(eval SRC = $(addprefix src/, $(SRC)))

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) -o $@ $^

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all

exec: re all
	./$(NAME) test

val: re all
	valgrind ./$(NAME) test

.PHONY: all clean fclean re
