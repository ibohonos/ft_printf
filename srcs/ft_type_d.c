/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 04:53:28 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/31 19:55:09 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_count_nbr(int nbr)
{
	int i;
	unsigned int n;

	i = 0;
	if (nbr < 0)
	{
		n = nbr * -1;
		i++;
	}
	else
		n = nbr;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (++i);
}

void	ft_type_d(int type_d, t_struct *p)
{
	int i;

	if (type_d < 0 && type_d != -2147483648 && p->plus != -1)
	{
		ft_putchar('-');
		p->ret_len++;
	}
	if (p->plus != -1 && type_d >= 0 && p->zero != -1)
	{
		ft_putchar('+');
		p->ret_len++;
	}
	if (p->minus == -1)
		ft_print_width(p, ft_count_nbr(type_d));
	if (p->plus != -1 && type_d >= 0 && p->zero == -1)
	{
		ft_putchar('+');
		p->ret_len++;
	}
	else if (p->space != -1 && type_d >= 0)
	{
		ft_putchar(' ');
		p->ret_len++;
	}
	if (p->precision != -1)
	{
		i = p->precision - ft_count_nbr(type_d);
		if (i < 0)
			p->ret_len += ft_count_nbr(type_d) - p->precision;
		while (i-- > 0)
			ft_putchar('0');
	}
	if (type_d < 0 && p->plus != -1)
		type_d *= -1;
	ft_putnbr(type_d);
	if (p->minus != -1)
		ft_print_width(p, ft_count_nbr(type_d));
	if (p->width == -1 && p->precision == -1)
		p->ret_len += ft_count_nbr(type_d);
}
