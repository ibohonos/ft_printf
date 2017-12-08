/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 16:36:24 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/08 11:55:19 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define SPEC "sSpdDioOuUxXcC"
# define BONUS_SPEC "eEfFgGaAn"
# define MODIFIERS "#0-+ "

# include "libft.h"
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_find_types(char format);
int		ft_init_flags(char *format, int i, va_list	argstr);
int		ft_init_modific(char *str, int i, va_list argstr);
void	ft_type_d(int type_d);
void	ft_type_s(char *s);
void	ft_type_c(char c);
void	ft_type_f(double type_f);

#endif
