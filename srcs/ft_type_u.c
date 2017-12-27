/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 22:09:04 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/28 00:27:10 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_u(unsigned int type_u, t_struct *p)
{
	ft_putstr(ft_itoa_base(type_u, 10));
	p->ret_len += ft_strlen(ft_itoa_base(type_u, 10));
}
