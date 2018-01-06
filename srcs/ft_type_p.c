/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 20:19:26 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/05 17:41:01 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_p(long long type_p, t_struct *p)
{
	ft_putstr("0x");
	if (p->width == -1 && p->precision == -1)
		p->ret_len += 2;
	ft_putstr(ft_itoa_base(type_p, 16));
	p->ret_len += ft_strlen(ft_itoa_base(type_p, 16));
}
