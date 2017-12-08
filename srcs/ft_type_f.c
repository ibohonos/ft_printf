/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 00:01:35 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/08 12:52:15 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_type_f(double type_f)
{
	char	*a;
	int		c;
	int		accuracy;
	int		minus;
	int		x;
	int		len;
	int		i;
	int		c1;

	c = 0;
	accuracy = 6;
	minus = 0;
	x = type_f;
	while (x)
	{
		x /= 10;
		c++;
	}
	x = type_f;
	type_f -= x;
	len = c + 1 + accuracy;
	a = ft_strnew(len + 1);
	a[c] = '.';
	a[len] = '\0';
	c1 = c + 1;
	while (x)
	{
		a[--c] = x % 10 + '0';
		x /= 10;
	}
	i = 0;
	while (i < accuracy)
	{
		type_f *= 10;
		x = type_f;
		a[c1 + i++] = type_f + '0';
		type_f -= x;
	}
	ft_putstr(a);
	ft_strdel(&a);
}
