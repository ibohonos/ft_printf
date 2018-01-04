/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_hu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 20:14:04 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/02 20:41:51 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_hu(unsigned short type_hu, t_struct *p)
{
	ft_putstr(ft_unsigned_itoa_base(type_hu, 10));
	p->ret_len += ft_strlen(ft_unsigned_itoa_base(type_hu, 10));
}
