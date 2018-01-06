/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 22:09:04 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/05 19:25:53 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char		*ft_strupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = ft_toupper(s[i]);
		i++;
	}
	return (s);
}

void	ft_type_x(unsigned int type_x, t_struct *p, int b)
{
	int i;

	if (p->minus == -1)
	{
		if (p->width != -1 && p->zero == -1 && p->precision != -1)
		{
			if (p->precision > (int)ft_strlen(ft_itoa_base(type_x, 16)))
				i = p->width - p->precision;
			else
				i = p->width - ft_strlen(ft_itoa_base(type_x, 16));
			if (i < 0)
				p->ret_len += ft_strlen(ft_itoa_base(type_x, 16)) - p->width;
			while (i-- > 0)
				ft_putchar(' ');
		}
		else if (p->width != -1 && p->zero == -1)
		{
			if (p->sharp != -1)
				i = p->width - ft_strlen(ft_itoa_base(type_x, 16)) - 2;
			else
				i = p->width - ft_strlen(ft_itoa_base(type_x, 16));
			if (i < 0)
				p->ret_len += ft_strlen(ft_itoa_base(type_x, 16)) - p->width;
			while (i-- > 0)
				ft_putchar(' ');
		}
	}
	if (p->sharp != -1 && b != 1 && type_x > 0)
	{
		ft_putstr("0x");
		if (p->width == -1 && p->precision == -1)
			p->ret_len += 2;
	}
	else if (p->sharp != -1 && b == 1 && type_x > 0)
	{
		ft_putstr("0X");
		if (p->width == -1 && p->precision == -1)
			p->ret_len += 2;
	}
	if (p->minus == -1)
	{
		if (p->width != -1 && p->zero != -1 && p->precision == -1)
		{
			if (p->sharp != -1)
				i = p->width - ft_strlen(ft_itoa_base(type_x, 16)) - 2;
			else
				i = p->width - ft_strlen(ft_itoa_base(type_x, 16));
			if (i < 0)
				p->ret_len += ft_strlen(ft_itoa_base(type_x, 16)) - p->width;
			while (i-- > 0)
				ft_putchar('0');
		}
	}
	i = ft_strlen(ft_itoa_base(type_x, 16));
	p->buffer = (char *)malloc(sizeof(char) * i + 1);
	if (p->precision != -1)
	{
		if (p->sharp != -1)
			i = p->precision - ft_strlen(ft_itoa_base(type_x, 16)) - 2;
		else
			i = p->precision - ft_strlen(ft_itoa_base(type_x, 16));
		if (i < 0 && p->width == -1)
			p->ret_len += ft_strlen(ft_itoa_base(type_x, 16)) - p->precision;
		while (i-- > 0)
			ft_putchar('0');
	}
	p->buffer = ft_itoa_base(type_x, 16);
	if (b == 1)
		p->buffer = ft_strupper(p->buffer);
	ft_putstr(p->buffer);
	free(p->buffer);
	p->buffer = NULL;
	if (p->minus != -1)
	{
		if (p->width != -1 && p->zero == -1 && p->precision != -1)
		{
			if (p->precision > (int)ft_strlen(ft_itoa_base(type_x, 16)))
				i = p->width - p->precision;
			else
				i = p->width - ft_strlen(ft_itoa_base(type_x, 16));
			if (i < 0)
				p->ret_len += ft_strlen(ft_itoa_base(type_x, 16)) - p->width;
			while (i-- > 0)
				ft_putchar(' ');
		}
		else if (p->width != -1 && p->zero == -1)
		{
			if (p->sharp != -1)
				i = p->width - ft_strlen(ft_itoa_base(type_x, 16)) - 2;
			else
				i = p->width - ft_strlen(ft_itoa_base(type_x, 16));
			if (i < 0)
				p->ret_len += ft_strlen(ft_itoa_base(type_x, 16)) - p->width;
			while (i-- > 0)
				ft_putchar(' ');
		}
	}
	if (p->width == -1 && p->precision == -1)
		p->ret_len += ft_strlen(ft_itoa_base(type_x, 16));
}
