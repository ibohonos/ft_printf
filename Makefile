# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/03 16:05:53 by ibohonos          #+#    #+#              #
#    Updated: 2017/12/04 16:55:31 by ibohonos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
FLAGS = -Wall -Wextra -Werror

OBJ_DIR		= ./obj
SRC_DIR 	= ./srcs
INCL_DIR 	= ./includes
WITH_LIBFT	= -I libft/includes -L libft/ -lft
OBJ 		= $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))
SRC 		= ft_printf.c ft_find_types.c ft_init_flags.c

all: $(NAME)

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	$(CC) $(FLAGS) -I $(INCL_DIR) -I ./libft/includes -o $@ -c $<

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

libft:
	@make -C libft/

libft_clean:
	@make -C libft/ clean

libft_fclean:
	@make -C libft/ fclean

libft_re:
	@make -C libft/ re

main:
	$(CC) $(FLAGS) -I $(INCL_DIR) -I ./libft/includes -o main.o -c main.c
	$(CC) $(FLAGS) main.o $(NAME) -I $(INCL_DIR) $(WITH_LIBFT) -o ft_printf
