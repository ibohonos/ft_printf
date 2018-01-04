/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_zd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 20:20:42 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/03 00:39:30 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_zd(long type_zd, t_struct *p)
{
	ft_putstr(ft_unsigned_itoa_base(type_zd, 10));
	p->ret_len += ft_strlen(ft_unsigned_itoa_base(type_zd, 10));
}
