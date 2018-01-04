/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_lld.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 23:01:17 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/03 00:33:46 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_lld(long long type_lld, t_struct *p)
{
	ft_putstr(ft_itoa_base(type_lld, 10));
	p->ret_len += ft_strlen(ft_itoa_base(type_lld, 10));
}
