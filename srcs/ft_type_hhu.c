/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_hhu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 20:18:30 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/02 20:40:42 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_hhu(unsigned char type_hhu, t_struct *p)
{
	ft_putstr(ft_unsigned_itoa_base(type_hhu, 10));
	p->ret_len += ft_strlen(ft_unsigned_itoa_base(type_hhu, 10));
}
