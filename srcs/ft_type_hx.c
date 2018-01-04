/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_hx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 20:14:04 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/02 23:56:09 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_hx(unsigned short type_hx, t_struct *p)
{
	if (p->sharp != -1 && type_hx > 0)
	{
		ft_putstr("0x");
		if (p->width == -1 && p->precision == -1)
			p->ret_len += 2;
	}
	ft_putstr(ft_unsigned_itoa_base(type_hx, 16));
	p->ret_len += ft_strlen(ft_unsigned_itoa_base(type_hx, 16));
}
