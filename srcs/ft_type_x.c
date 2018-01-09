/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 22:09:04 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/09 16:54:50 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_x(unsigned int type_x, t_struct *p, int b)
{
	int		i;
	char	*s;
	char	*c;

	s = ft_itoa_base(type_x, 16);
	if (p->plus != -1 && p->precision != -1 && p->width != -1)
	{
		if (p->width > p->precision)
			p->width--;
		if (p->width < p->precision && p->precision < (int)ft_strlen(s))
			p->ret_len++;
	}
	if (p->precision > p->width && p->width > 0
		&& p->width > (int)ft_strlen(s))
		p->ret_len++;
	if ((int)ft_strlen(s) > p->width && p->width != -1
		&& p->width < p->precision)
		p->ret_len -= p->width;
	if (p->precision == (int)ft_strlen(s) && p->plus == -1 && p->precision != -1
		&& p->width != -1)
		p->ret_len--;
	if (p->minus == -1)
	{
		if (p->width != -1 && p->zero == -1 && p->precision != -1)
		{
			if (p->precision > (int)ft_strlen(s))
				i = p->width - p->precision;
			else if (p->precision == 0)
			{
				i = p->width;
				p->ret_len++;
			}
			else
				i = p->width - ft_strlen(s);
			if (i < 0)
				p->ret_len += ft_strlen(s) - p->width;
			while (i-- > 0)
				ft_putchar(' ');
		}
		else if (p->width != -1 && p->zero == -1)
		{
			if (p->sharp != -1)
				i = p->width - ft_strlen(s) - 2;
			else
				i = p->width - ft_strlen(s);
			if (i < 0)
				p->ret_len += ft_strlen(s) - p->width;
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
				i = p->width - ft_strlen(s) - 2;
			else
				i = p->width - ft_strlen(s);
			if (i < 0)
				p->ret_len += ft_strlen(s) - p->width;
			while (i-- > 0)
				ft_putchar('0');
		}
	}
	i = ft_strlen(s);
	if (p->precision != -1)
	{
		if (p->sharp != -1)
			i = p->precision - ft_strlen(s) - 2;
		else
			i = p->precision - ft_strlen(s);
		if (i < 0 && p->width == -1)
			p->ret_len += ft_strlen(s) - p->precision;
		while (i-- > 0)
			ft_putchar('0');
	}
	c = ft_itoa_base(type_x, 16);
	p->buffer = c;
	if (b == 1)
		p->buffer = ft_strupper(c);
	else
		p->buffer = ft_itoa_base(type_x, 16);
	if ((p->precision == 0 && type_x != 0) || (type_x == 0 && p->plus != -1) ||
		p->precision != 0)
		ft_putstr(p->buffer);
	else if (p->precision == 0 && type_x == 0)
		p->ret_len--;
	ft_strdel(&p->buffer);
	ft_strdel(&c);
	if (p->minus != -1)
	{
		if (p->width != -1 && p->zero == -1 && p->precision != -1)
		{
			if (p->precision > (int)ft_strlen(s))
				i = p->width - p->precision;
			else
				i = p->width - ft_strlen(s);
			if (i < 0)
				p->ret_len += ft_strlen(s) - p->width;
			while (i-- > 0)
				ft_putchar(' ');
		}
		else if (p->width != -1 && p->zero == -1)
		{
			if (p->sharp != -1)
				i = p->width - ft_strlen(s) - 2;
			else
				i = p->width - ft_strlen(s);
			if (i < 0)
				p->ret_len += ft_strlen(s) - p->width;
			while (i-- > 0)
				ft_putchar(' ');
		}
	}
	if (p->width == -1 && p->precision == -1)
		p->ret_len += ft_strlen(s);
	ft_strdel(&s);
}
