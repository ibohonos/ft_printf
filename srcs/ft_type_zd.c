/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_zd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 20:20:42 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/05 18:47:07 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_zd(long type_zd, t_struct *p)
{
	ft_putstr(ft_itoa_base(type_zd, 10));
	p->ret_len += ft_strlen(ft_itoa_base(type_zd, 10));
}
