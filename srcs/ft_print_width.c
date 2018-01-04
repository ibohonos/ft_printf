/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 12:23:42 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/31 20:25:01 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_width(t_struct *p, int all)
{
	int i;

	if (p->width != -1 && p->zero == -1 && p->precision != -1)
	{
		if (p->space != -1)
			i = p->width - p->precision - 1;
		else
			i = p->width - p->precision;
		if (i < 0)
			p->ret_len += all - p->width;
		while (i-- > 0)
			ft_putchar(' ');
	}
	else if (p->width != -1 && p->zero != -1 && p->precision == -1)
	{
		i = p->width - all;
		if (i < 0)
			p->ret_len += all - p->width;
		while (i-- > 0)
			ft_putchar('0');
	}
	else if (p->width != -1 && p->zero == -1)
	{
		i = p->width - all;
		if (i < 0)
			p->ret_len += all - p->width;
		while (i-- > 0)
			ft_putchar(' ');
	}
}
