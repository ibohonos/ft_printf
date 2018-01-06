/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_lx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 21:39:41 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/06 15:41:52 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_lx(unsigned long type_lx, t_struct *p, int b)
{
	if (p->sharp != -1 && type_lx > 0 && b == 0)
	{
		ft_putstr("0x");
		if (p->width == -1 && p->precision == -1)
			p->ret_len += 2;
	}
	else if (p->sharp != -1 && type_lx > 0 && b == 1)
	{
		ft_putstr("0X");
		if (p->width == -1 && p->precision == -1)
			p->ret_len += 2;
	}
	ft_putstr(ft_unsigned_itoa_base(type_lx, 16));
	p->ret_len += ft_strlen(ft_unsigned_itoa_base(type_lx, 16));
}
