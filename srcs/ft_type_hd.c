/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_hd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 20:14:04 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/03 00:34:01 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_hd(short type_hd, t_struct *p)
{
	ft_putstr(ft_itoa_base(type_hd, 10));
	p->ret_len += ft_strlen(ft_itoa_base(type_hd, 10));
}
