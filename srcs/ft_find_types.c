/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_types.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 17:49:17 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/08 11:58:49 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_find_types(char format)
{
	int		i;
	char	*a;

	a = ft_strnew(14);
	a[14] = '\0';
	a = SPEC;
	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] == format)
			return (1);
		else
			i++;
	}
	ft_strdel(&a);
	a = ft_strnew(5);
	a[5] = '\0';
	a = MODIFIERS;
	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] == format)
			return (2);
		else
			i++;
	}
	ft_strdel(&a);
	a = ft_strnew(9);
	a[9] = '\0';
	a = BONUS_SPEC;
	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] == format)
			return (1);
		else
			i++;
	}
	return (0);
}
