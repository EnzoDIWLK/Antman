##
## EPITECH PROJECT, 2022
## Antman
## File description:
## Makefile
##

all:
			@clear
			@$(MAKE) -C antman/ all
			@$(MAKE) -C giantman/ all

exe:		re clean
			./antman/antman test > prout; clear; ./giantman/giantman prout 1

clean:
			@$(MAKE) -C antman/ clean
			@$(MAKE) -C giantman/ clean

fclean:
			@$(MAKE) -C antman/ fclean
			@$(MAKE) -C giantman/ fclean

re:			fclean all