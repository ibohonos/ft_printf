/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_zx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 20:20:42 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/02 23:57:35 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_zx(size_t type_zx, t_struct *p)
{
	if (p->sharp != -1 && type_zx > 0)
	{
		ft_putstr("0x");
		if (p->width == -1 && p->precision == -1)
			p->ret_len += 2;
	}
	ft_putstr(ft_unsigned_itoa_base(type_zx, 10));
	p->ret_len += ft_strlen(ft_unsigned_itoa_base(type_zx, 10));
}
