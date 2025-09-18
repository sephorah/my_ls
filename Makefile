##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Day 10 - Task 01 - Makefile
##

SRC = Makefile

NAME = make

OBJ = $(MAKE:.c=.o)

all: $(NAME)

$(NAME): $(SRC)
	make -C lib/my
	gcc -Werror -Wall -o my_ls my_ls.c -lm -I./include libmy.a

clean:
	make clean -C lib/my

fclean:
	make fclean -C lib/my

re: fclean all
