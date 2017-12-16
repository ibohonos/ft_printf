/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 16:55:57 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/13 13:58:31 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_init_specific(char *format, int i, va_list argstr, t_struct *p)
{
	if (format[i] == '%')
		i++;
	if (format[i] == '%')
		return (i);
	if (format[i] == 'd' || format[i] == 'D' || format[i] == 'i')
		ft_type_d(va_arg(argstr, int), p);
	else if (format[i] == 's')
		ft_type_s(va_arg(argstr, char *), p);
	else if (format[i] == 'c')
		ft_type_c(va_arg(argstr, int), p);
	else if (format[i] == 'f' || format[i] == 'F')
		ft_type_f(va_arg(argstr, double), p);
	return (i);
}