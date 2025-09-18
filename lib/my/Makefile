##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## my_ls
##

SRC = 	my_putchar.c \
	my_put_nbr.c \
	my_putstr.c \
	my_strlen.c \
	my_strcat.c \
	my_pow_10.c \
	nb_len.c \
	format_specifiers_part1.c \
	my_printf.c \
	is_alpha.c \
	return_file_type.c \
	display_file_type.c \
	display_user_permissions.c \
	display_group_permissions.c \
	display_other_permissions.c \
	display_file_and_group.c \
	display_file_modif_date.c \
	display_total_blocks.c \
	handle_l.c \
	get_relative_path.c \
	handle_a.c \
	my_basic_ls.c \
	handle_errors.c \
	handle_d.c

OBJ = $(SRC:.c=.o)

NAME = libmy.a

ROOT = ../../

all: $(NAME)

$(NAME): $(OBJ)
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	cp -f $(NAME) $(ROOT)
	cp -f my.h ../../include

clean:
	rm -f $(shell find -name '*~')
	rm -f $(shell find -name '*#*')
	rm -f $(shell find ../.. -name '*~')
	rm -f $(shell find ../.. -name '*#*')
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../../include/my.h
	rm -f ../../libmy.a
	rm -f ../../my_ls

re: fclean all
