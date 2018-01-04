/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_ld.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 21:39:41 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/03 00:32:34 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_ld(long type_ld, t_struct *p)
{
	ft_putstr(ft_itoa_base(type_ld, 10));
	p->ret_len += ft_strlen(ft_itoa_base(type_ld, 10));
}
