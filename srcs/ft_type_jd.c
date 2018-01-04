/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_jd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 20:19:26 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/03 00:34:36 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_jd(intmax_t type_jd, t_struct *p)
{
	ft_putstr(ft_itoa_base(type_jd, 10));
	p->ret_len += ft_strlen(ft_itoa_base(type_jd, 10));
}
