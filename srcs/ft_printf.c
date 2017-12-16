/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 16:35:49 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/08 11:57:39 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_default_all(t_struct *p)
{
	p->sharp = -1;
	p->zero = -1;
	p->minus = -1;
	p->plus = -1;
	p->space = -1;
	p->width = -1;
	p->precision = -1;
	p->spec_hh = 0;
	p->spec_h = 0;
	p->spec_l = 0;
	p->spec_ll = 0;
	p->spec_j = 0;
	p->spec_z = 0;
    p->buffer = (char*)malloc(sizeof(char) * 1);
    p->ret_len = 0;
}

int	ft_printf(const char *format, ...)
{
	t_struct	p;
	va_list	argstr;
	char	*str;
	int		i;

	init_default_all(&p);
	va_start(argstr, format);
	str = (char*)format;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] == '%')
		{
			p.ret_len += 1;
			i++;
			ft_putchar(str[i++]);
		}
		// if (str[i] == '%' && str[i + 1] == '\n')  some trubles
		// 	i++;
		if (str[i] == '%' && str[i + 1] == '\0')
			break ;
		if (str[i] != '%' && str[i])
		{
			ft_putchar(str[i]);
			p.ret_len += 1;
		}
		if (str[i] == '%' && ft_find_types(str[i + 1], -1) == 1)
			i = ft_init_specific(str, ++i, argstr, &p);
		if (str[i] == '%' && ft_find_types(str[i + 1], -1) == 2)
			i = ft_init_modific(str, ++i, argstr, &p);
		if (str[i] == '%' && ft_find_types(str[i + 1], -1) == 3)
			i = ft_init_flags(str, ++i, argstr, &p);
		i++;
	}
	va_end(argstr);
	return (p.ret_len);
}
