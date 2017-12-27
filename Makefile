# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/03 16:05:53 by ibohonos          #+#    #+#              #
#    Updated: 2017/12/28 00:24:12 by ibohonos         ###   ########.fr        #
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
				ft_atoi.c ft_strcmp.c ft_strstr.c ft_strdup.c ft_toupper.c \
				ft_strlen.c \
				ft_printf.c ft_find_types.c ft_init_flags.c ft_type_d.c \
				ft_type_s.c ft_type_c.c ft_type_x.c ft_type_o.c ft_type_u.c \
				ft_init_modific.c ft_type_f.c ft_init_specific.c \
				ft_init_default_all.c ft_count_nbrs.c ft_find.c ft_itoa_base.c \
				ft_init_precision.c ft_init_width.c ft_print_width.c \
				ft_init_types.c

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

main: re
	$(CC) $(FLAGS) -I $(INCL_DIR) -o main.o -c main.c
	$(CC) $(FLAGS) main.o $(NAME) -I $(INCL_DIR) -o ft_printf

main_fclean: fclean
	/bin/rm -f main.o ft_printf
