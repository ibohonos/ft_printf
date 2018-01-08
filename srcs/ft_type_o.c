/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_o.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 22:09:04 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/08 16:00:15 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_o(unsigned int type_o, t_struct *p)
{
	int i;

	p->buffer = ft_itoa_base(type_o, 8);
	if (p->plus != -1 && p->zero != -1)
	{
		ft_putchar('+');
		if (p->width == -1)
			p->ret_len++;
	}
	if (p->sharp != -1 && p->precision == 0 && p->width == -1)
		p->ret_len++;
	if (p->minus == -1)
	{
		if (p->sharp != -1 && p->zero == -1)
			ft_print_width(p, ft_strlen(p->buffer) + 1);
		else if (p->sharp != -1 && p->zero != -1)
			ft_print_width(p, ft_strlen(p->buffer) + 2);
		else
			ft_print_width(p, ft_strlen(p->buffer));
	}
	if (p->plus != -1 && p->zero == -1)
	{
		ft_putchar('+');
		if (p->width == -1)
			p->ret_len++;
	}
	else if (p->space != -1 && p->width == -1)
	{
		ft_putchar(' ');
		p->ret_len++;
	}
	if (p->precision != -1)
	{
		i = p->precision - ft_strlen(p->buffer);
		if (i < 0)
			p->ret_len += ft_strlen(p->buffer) - p->precision;
		while (i-- > 0)
			ft_putchar('0');
	}
	if (p->sharp != -1 && p->zero != -1)
	{
		ft_putstr("0x");
		if (p->width == -1 && p->precision == -1)
			p->ret_len += 2;
	}
	else if ((p->sharp != -1 && p->zero == -1 && type_o != 0) ||
		(p->sharp != -1 && p->precision == 0 && type_o == 0))
	{
		ft_putstr("0");
		if (p->width == -1 && p->precision == -1)
			p->ret_len++;
	}
	if ((p->precision == 0 && type_o != 0) || (type_o == 0 && p->plus != -1) ||
		p->precision != 0)
		ft_putstr(p->buffer);
	else if (p->precision == 0 && type_o == 0)
		p->ret_len--;
	if (p->minus != -1)
	{
		if (p->sharp != -1 && p->zero == -1)
			ft_print_width(p, ft_strlen(p->buffer) + 1);
		else if (p->sharp != -1 && p->zero != -1)
			ft_print_width(p, ft_strlen(p->buffer) + 2);
		else
			ft_print_width(p, ft_strlen(p->buffer));
	}
	if (p->width == -1 && p->precision == -1)
		p->ret_len += ft_strlen(p->buffer);
	ft_strdel(&p->buffer);
}
