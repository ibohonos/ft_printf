/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_lu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 21:39:41 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/02 20:41:56 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_lu(unsigned long type_lu, t_struct *p)
{
	ft_putstr(ft_unsigned_itoa_base(type_lu, 10));
	p->ret_len += ft_strlen(ft_unsigned_itoa_base(type_lu, 10));
}
