/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 22:09:04 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/07 15:14:17 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_u(unsigned int type_u, t_struct *p)
{
	int i;

	p->buffer = ft_unsigned_itoa_base(type_u, 10);
	if (p->minus == -1)
		ft_print_width(p, ft_strlen(p->buffer));
	if (p->precision != -1)
	{
		i = p->precision - ft_strlen(p->buffer);
		if (i < 0)
			p->ret_len += ft_strlen(p->buffer)
				- p->precision;
		while (i-- > 0)
			ft_putchar('0');
	}
	ft_putstr(p->buffer);
	if (p->minus != -1)
		ft_print_width(p, ft_strlen(p->buffer));
	if (p->width == -1 && p->precision == -1)
		p->ret_len += ft_strlen(p->buffer);
	ft_strdel(&p->buffer);
}
