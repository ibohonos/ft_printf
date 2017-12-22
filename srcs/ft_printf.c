/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 16:35:49 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/22 13:00:54 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_struct	p;
	va_list		argstr;
	char		*str;
	int			i;

	va_start(argstr, format);
	str = (char *)format;
	i = 0;
	p.ret_len = 0;
	while (str[i] != '\0')
	{
		ft_init_default_all(&p);
		if (str[i] == '%' && str[i + 1] == '%')
		{
			p.ret_len++;
			i++;
			ft_putchar(str[i++]);
		}
		if ((str[i] == '%' && str[i + 1] == '\0') || str[i] == '\0')
			break ;
		if (str[i] != '%' && str[i])
		{
			ft_putchar(str[i]);
			p.ret_len++;
		}
		if (str[i] == '%' && ft_find_types(str[i + 1], -1) == 1)
			i = ft_init_flags(str, ++i, &p);
		if (str[i] == '%' && ft_find_types(str[i + 1], -1) == 2)
			i = ft_init_width(str, ++i, &p);
		if (str[i] == '%' && ft_find_types(str[i + 1], -1) == 3)
			i = ft_init_precision(str, ++i, &p);
		if (str[i] == '%' && ft_find_types(str[i + 1], -1) == 4)
			i = ft_init_modific(str, ++i, &p);
		if (p.width != -1 || p.precision != -1)
			if (ft_find_types(str[i], -1) == 5)
				i = ft_init_specific(str, i, argstr, &p);
		if (str[i] == '%' && ft_find_types(str[i + 1], -1) == 5)
			i = ft_init_specific(str, ++i, argstr, &p);
		i++;
	}
	va_end(argstr);
	return (p.ret_len);
}
