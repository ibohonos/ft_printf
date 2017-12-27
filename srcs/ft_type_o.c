/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_o.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 22:09:04 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/28 00:27:04 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_o(unsigned int type_o, t_struct *p)
{
	ft_putstr(ft_itoa_base(type_o, 8));
	p->ret_len += ft_strlen(ft_itoa_base(type_o, 8));
}
