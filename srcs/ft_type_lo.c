/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_lo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 21:39:41 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/05 14:41:47 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_lo(unsigned long type_lo, t_struct *p)
{
	ft_putstr(ft_unsigned_itoa_base(type_lo, 8));
	p->ret_len += ft_strlen(ft_unsigned_itoa_base(type_lo, 8));
}
