/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 04:53:28 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/08 18:16:40 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_d(int type_d, t_struct *p)
{
	int minus;

	if (p->precision != -1)
		p->zero = -1;
	p->buffer = ft_itoa_base(type_d, 10);
	if (p->space != -1 && type_d >= 0)
	{
		ft_putchar(' ');
		if (p->width == -1)
			p->ret_len++;
	}
	if (p->space != -1 && p->width != -1 && p->precision == -1)
		p->width--;
	minus = 0;
	if (type_d < 0 && type_d != -2147483648 && p->zero != -1)
	{
		ft_putchar('-');
		type_d *= -1;
		minus = 1;
		ft_strdel(&p->buffer);
		p->buffer = ft_itoa_base(type_d, 10);
		if (p->width == -1)
			p->ret_len++;
	}
	else if (p->plus != -1 && p->zero != -1)
	{
		ft_putchar('+');
		if (p->width == -1)
			p->ret_len++;
	}
	if ((minus == 1 || p->plus != -1 || type_d < 0)
		&& p->precision != -1 && p->width != -1)
		p->width--;
	if (p->precision > p->width && p->width > 0)
		p->ret_len++;
	if (p->minus == -1)
	{
		if (p->plus != -1 || minus == 1)
			ft_print_width(p, ft_strlen(p->buffer) + 1);
		else
			ft_print_width(p, ft_strlen(p->buffer));
	}
	if (type_d < 0 && type_d != -2147483648 && p->zero == -1)
	{
		ft_putchar('-');
		type_d *= -1;
		minus = 1;
		ft_strdel(&p->buffer);
		p->buffer = ft_itoa_base(type_d, 10);
		if (p->width == -1)
			p->ret_len++;
	}
	else if (p->plus != -1 && p->zero == -1)
	{
		ft_putchar('+');
		if (p->width == -1)
			p->ret_len++;
	}
	if (p->precision != -1)
		ft_print_precision(p, ft_strlen(p->buffer));
	if ((p->precision == 0 && type_d != 0) || (type_d == 0 && p->plus != -1) ||
		p->precision != 0)
		ft_putstr(p->buffer);
	else if (p->precision == 0 && type_d == 0)
		p->ret_len--;
	if (p->minus != -1)
	{
		if (p->plus != -1 || minus == 1)
			ft_print_width(p, ft_strlen(p->buffer) + 1);
		else
			ft_print_width(p, ft_strlen(p->buffer));
	}
	if (p->width == -1 && p->precision == -1)
		p->ret_len += ft_strlen(p->buffer);
	ft_strdel(&p->buffer);
}
