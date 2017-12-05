/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_types.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 17:49:17 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/05 14:30:15 by ibohonos         ###   ########.fr       */
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
	return (0);
}
