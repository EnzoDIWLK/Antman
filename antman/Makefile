##
## EPITECH PROJECT, 2022
## Antman
## File description:
## Makefile
##

CC= gcc
RM = rm -rf
CFLAGS := -W -Wall -g3 -Iinclude
NAME = antman

SRC =	basic.c			\
		dictionary.c	\
		find_word.c		\
		int_tochar.c	\
		main.c			\
		my_get.c		\
		my_put.c		\
		my_str.c

$(eval SRC = $(addprefix src/, $(SRC)))

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) -o  $@ $^

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

exec: re all
	./$(NAME) gertrude

val: re all
	valgrind ./$(NAME) test

re : fclean all

.PHONY: all clean fclean re
