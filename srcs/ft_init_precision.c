/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_precision.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:11:03 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/23 17:43:24 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_init_precision(char *s, int i, t_struct *p)
{
	i++;
	if (s[i] >= '0' && s[i] <= '9')
	{
		p->precision = ft_atoi(s + i);
		while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
			i++;
	}
	if (p->minus == 1 && p->precision != -1)
		p->zero = -1;
	if (p->precision != -1 && p->width == -1)
		p->ret_len += p->precision;
	else if (p->precision != -1 && p->width != -1)
		p->ret_len += 0;
	return (i);
}