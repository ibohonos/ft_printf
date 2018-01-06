/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 22:09:04 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/06 16:57:51 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_u(unsigned int type_u, t_struct *p)
{
	int i;
	
	if (p->minus == -1)
		ft_print_width(p, ft_strlen(ft_unsigned_itoa_base(type_u, 10)));
	if (p->precision != -1)
	{
		i = p->precision - ft_strlen(ft_unsigned_itoa_base(type_u, 8));
		if (i < 0)
			p->ret_len += ft_strlen(ft_unsigned_itoa_base(type_u, 8))
				- p->precision;
		while (i-- > 0)
			ft_putchar('0');
	}
	ft_putstr(ft_unsigned_itoa_base(type_u, 10));
	if (p->minus != -1)
		ft_print_width(p, ft_strlen(ft_unsigned_itoa_base(type_u, 10)));
	if (p->width == -1 && p->precision == -1)
		p->ret_len += ft_strlen(ft_unsigned_itoa_base(type_u, 10));
}
