/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 16:35:49 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/09 09:13:21 by ibohonos         ###   ########.fr       */
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
			ft_putchar(str[i++]);
			p.ret_len++;
		}
		else if (str[i] != '%' && str[i])
		{
			ft_putchar(str[i]);
			p.ret_len++;
		}
		else if ((str[i] == '%' && str[i + 1] == '\0') || str[i] == '\0')
			break ;
		else if (str[i] == '%' && ft_find_types(str[i + 1], -1) > 0)
			i = ft_init_types(str, ++i, &p, argstr);
		if ((str[i] == '%' && str[i + 1] == '\0') || str[i] == '\0')
			break ;
		i++;
	}
	va_end(argstr);
	return (p.ret_len);
}
