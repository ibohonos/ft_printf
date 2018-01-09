/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_llx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 23:01:17 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/09 14:01:51 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_llx(unsigned long long type_llx, t_struct *p, int b)
{
	char *c;

	if (p->sharp != -1 && type_llx > 0 && b == 0)
	{
		ft_putstr("0x");
		if (p->width == -1 && p->precision == -1)
			p->ret_len += 2;
	}
	else if (p->sharp != -1 && type_llx > 0 && b == 1)
	{
		ft_putstr("0X");
		if (p->width == -1 && p->precision == -1)
			p->ret_len += 2;
	}
	p->buffer = ft_unsigned_itoa_base(type_llx, 16);
	c = p->buffer;
	if (b == 1)
		p->buffer = ft_strupper(c);
	else
		p->buffer = ft_unsigned_itoa_base(type_llx, 16);
	ft_strdel(&c);
	ft_putstr(p->buffer);
	p->ret_len += ft_strlen(p->buffer);
	ft_strdel(&p->buffer);
}
