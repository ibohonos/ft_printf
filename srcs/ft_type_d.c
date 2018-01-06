/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 04:53:28 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/06 17:14:42 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_d(int type_d, t_struct *p)
{
	int i;

	if (type_d < 0 && type_d != -2147483648 && p->plus != -1)
	{
		ft_putchar('-');
		if (p->width == -1)
			p->ret_len++;
	}
	if (p->plus != -1 && type_d >= 0 && p->zero != -1)
	{
		ft_putchar('+');
		if (p->width == -1)
			p->ret_len++;
	}
	if (p->minus == -1)
		ft_print_width(p, ft_strlen(ft_itoa_base(type_d, 10)));
	if (p->plus != -1 && type_d >= 0 && p->zero == -1)
	{
		ft_putchar('+');
		p->ret_len++;
	}
	else if (p->space != -1 && type_d >= 0 && p->width == -1)
	{
		ft_putchar(' ');
		p->ret_len++;
	}
	if (p->precision != -1)
	{
		i = p->precision - ft_strlen(ft_itoa_base(type_d, 10));
		if (i < 0)
			p->ret_len += ft_strlen(ft_itoa_base(type_d, 10)) - p->precision;
		while (i-- > 0)
			ft_putchar('0');
	}
	if (type_d < 0 && p->plus != -1)
		type_d *= -1;
	ft_putstr(ft_itoa_base(type_d, 10));
	if (p->minus != -1)
		ft_print_width(p, ft_strlen(ft_itoa_base(type_d, 10)));
	if (p->width == -1 && p->precision == -1)
		p->ret_len += ft_strlen(ft_itoa_base(type_d, 10));
}
