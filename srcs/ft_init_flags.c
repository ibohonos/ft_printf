/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 00:01:06 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/22 17:39:13 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_init_flags(char *str, int i, t_struct *p)
{
	if (str[i] == ' ' && p->plus == -1)
	{
		p->space = 1;
		i++;
	}
	if (str[i] == '+')
	{
		p->plus = 1;
		p->space = -1;
		i++;
	}
	if (str[i] == '-')
	{
		p->minus = 1;
		p->zero = -1;
		i++;
	}
	if (str[i] == '#')
	{
		p->sharp = 1;
		i++;
	}
	if (str[i] == '0' && p->precision == -1 && p->minus == -1)
	{
		p->zero = 1;
		i++;
	}
	return (i);
}
