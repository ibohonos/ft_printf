/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_jo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 20:19:26 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/05 14:41:25 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_jo(uintmax_t type_jo, t_struct *p)
{
	ft_putstr(ft_unsigned_itoa_base(type_jo, 8));
	p->ret_len += ft_strlen(ft_unsigned_itoa_base(type_jo, 8));
}
