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

int	ft_find_types(char format, int i)
{
	while (SPEC[++i] != '\0')
		if (SPEC[i] == format)
			return (1);
		// else
			// i++;
	i = -1;
	while (FLAGS[++i] != '\0')
		if (FLAGS[i] == format)
			return (2);
	i = -1;
	while (BONUS_SPEC[++i] != '\0')
		if (BONUS_SPEC[i] == format)
			return (1);
	i = -1;
	while (MODIFICATORS[++i] != '\0')
		if (MODIFICATORS[i] == format)
			return 3;
	return (0);
}
