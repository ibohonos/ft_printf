/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_hhd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 20:18:30 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/03 00:34:15 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_hhd(signed char type_hhd, t_struct *p)
{
	ft_putstr(ft_itoa_base(type_hhd, 10));
	p->ret_len += ft_strlen(ft_itoa_base(type_hhd, 10));
}
