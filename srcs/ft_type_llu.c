/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_llu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 23:01:17 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/02 20:42:19 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_llu(unsigned long long type_llu, t_struct *p)
{
	ft_putstr(ft_unsigned_itoa_base(type_llu, 10));
	p->ret_len += ft_strlen(ft_unsigned_itoa_base(type_llu, 10));
}
