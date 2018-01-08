# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/03 16:05:53 by ibohonos          #+#    #+#              #
#    Updated: 2018/01/08 16:29:57 by ibohonos         ###   ########.fr        #
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
				ft_strlen.c ft_strsub.c \
				ft_printf.c ft_find_types.c ft_init_flags.c ft_type_d.c \
				ft_type_s.c ft_type_c.c ft_type_x.c ft_type_o.c ft_type_u.c \
				ft_init_modific.c ft_type_f.c ft_init_specific.c  ft_is_spec.c \
				ft_init_default_all.c ft_count_nbrs.c ft_find.c ft_itoa_base.c \
				ft_unsigned_itoa_base.c ft_init_precision.c ft_init_width.c \
				ft_print_width.c ft_init_types.c ft_type_lu.c ft_type_llu.c \
				ft_type_hu.c ft_type_hhu.c ft_type_ju.c ft_type_zu.c \
				ft_type_lx.c ft_type_llx.c ft_type_hx.c ft_type_hhx.c \
				ft_type_jx.c ft_type_zx.c ft_type_ld.c ft_type_lld.c \
				ft_type_hd.c ft_type_hhd.c ft_type_jd.c ft_type_zd.c \
				ft_type_lo.c ft_type_llo.c ft_type_ho.c ft_type_hho.c \
				ft_type_jo.c ft_type_zo.c ft_type_p.c ft_type_ln.c \
				ft_type_lln.c ft_type_hn.c ft_type_hhn.c ft_type_jn.c \
				ft_type_zn.c ft_type_n.c ft_type_wchar.c ft_type_b.c \
				ft_type_cl.c ft_print_precision.c

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
	$(CC) -I $(INCL_DIR) -o main.o -c main.c
	$(CC) main.o $(NAME) -I $(INCL_DIR) -o ft_printf

main_fclean: fclean
	/bin/rm -f main.o ft_printf
