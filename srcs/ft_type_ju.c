/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_ju.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 20:19:26 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/02 20:41:43 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_ju(uintmax_t type_ju, t_struct *p)
{
	ft_putstr(ft_unsigned_itoa_base(type_ju, 10));
	p->ret_len += ft_strlen(ft_unsigned_itoa_base(type_ju, 10));
}
