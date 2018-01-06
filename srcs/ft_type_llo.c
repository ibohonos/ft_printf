/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_llo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 23:01:17 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/05 14:41:42 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_llo(unsigned long long type_llo, t_struct *p)
{
	ft_putstr(ft_unsigned_itoa_base(type_llo, 8));
	p->ret_len += ft_strlen(ft_unsigned_itoa_base(type_llo, 8));
}
