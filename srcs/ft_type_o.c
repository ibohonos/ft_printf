/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_o.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 22:09:04 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/06 18:11:18 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_o(unsigned int type_o, t_struct *p)
{
	int i;

	if (p->plus != -1 && p->zero != -1)
	{
		ft_putchar('+');
		if (p->width == -1)
			p->ret_len++;
	}
	if (p->minus == -1 && p->sharp == -1 && p->zero != -1)
		ft_print_width(p, ft_strlen(ft_itoa_base(type_o, 8)) - 1);
	else if (p->minus == -1 && p->sharp != -1 && p->zero == -1)
		ft_print_width(p, ft_strlen(ft_itoa_base(type_o, 8)) - 1);
	else if (p->minus == -1 && p->sharp != -1 && p->zero != -1)
		ft_print_width(p, ft_strlen(ft_itoa_base(type_o, 8)) - 2);
	else if (p->minus == -1)
		ft_print_width(p, ft_strlen(ft_itoa_base(type_o, 8)));
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
		i = p->precision - ft_strlen(ft_itoa_base(type_o, 8));
		if (i < 0)
			p->ret_len += ft_strlen(ft_itoa_base(type_o, 8)) - p->precision;
		while (i-- > 0)
			ft_putchar('0');
	}
	if (p->sharp != -1 && p->zero != -1)
	{
		ft_putstr("0x");
		if (p->width == -1 && p->precision == -1)
			p->ret_len += 2;
	}
	else if (p->sharp != -1 && p->zero == -1)
	{
		ft_putstr("0");
		if (p->width == -1 && p->precision == -1)
			p->ret_len++;
	}
	ft_putstr(ft_itoa_base(type_o, 8));
	if (p->minus != -1 && p->sharp == -1 && p->zero != -1)
		ft_print_width(p, ft_strlen(ft_itoa_base(type_o, 8)) - 1);
	else if (p->minus != -1 && p->sharp != -1 && p->zero == -1)
		ft_print_width(p, ft_strlen(ft_itoa_base(type_o, 8)) - 1);
	else if (p->minus != -1 && p->sharp != -1 && p->zero != -1)
		ft_print_width(p, ft_strlen(ft_itoa_base(type_o, 8)) - 2);
	else if (p->minus != -1)
		ft_print_width(p, ft_strlen(ft_itoa_base(type_o, 8)));
	if (p->width == -1 && p->precision == -1)
		p->ret_len += ft_strlen(ft_itoa_base(type_o, 8));
}
