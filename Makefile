# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/03 16:05:53 by ibohonos          #+#    #+#              #
#    Updated: 2017/12/17 23:23:49 by ibohonos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
FLAGS = -Wall -Wextra -Werror

OBJ_DIR		= ./obj
SRC_DIR 	= ./srcs
INCL_DIR 	= ./includes
OBJ 		= $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))
SRC 		= ft_putchar.c ft_putnbr.c ft_putstr.c ft_strdel.c ft_strnew.c \
				ft_atoi.c ft_strcmp.c\
				ft_printf.c ft_find_types.c ft_init_flags.c ft_type_d.c \
				ft_type_s.c ft_type_c.c ft_init_modific.c ft_type_f.c \
				ft_init_specific.c ft_init_default_all.c ft_count_nbrs.c \
				ft_find.c

all: $(NAME)

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	$(CC) $(FLAGS) -I $(INCL_DIR) -o $@ -c $<

$(NAME):
	@mkdir -p $(OBJ_DIR)
	@$(MAKE) $(OBJ)
	@ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -rf $(OBJ_DIR)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

main:
	make re
	$(CC) $(FLAGS) -I $(INCL_DIR) -o main.o -c main.c
	$(CC) $(FLAGS) main.o $(NAME) -I $(INCL_DIR) -o ft_printf

main_fclean:
	/bin/rm -f main.o ft_printf
