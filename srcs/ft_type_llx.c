/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_llx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 23:01:17 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/02 23:56:20 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_llx(unsigned long long type_llx, t_struct *p)
{
	if (p->sharp != -1 && type_llx > 0)
	{
		ft_putstr("0x");
		if (p->width == -1 && p->precision == -1)
			p->ret_len += 2;
	}
	ft_putstr(ft_unsigned_itoa_base(type_llx, 16));
	p->ret_len += ft_strlen(ft_unsigned_itoa_base(type_llx, 16));
}
