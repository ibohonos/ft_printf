/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_ho.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 20:14:04 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/05 14:41:36 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_ho(unsigned short type_ho, t_struct *p)
{
	ft_putstr(ft_unsigned_itoa_base(type_ho, 8));
	p->ret_len += ft_strlen(ft_unsigned_itoa_base(type_ho, 8));
}
