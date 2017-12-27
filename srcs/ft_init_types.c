/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_types.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 15:49:19 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/22 17:34:40 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_init_types(char *s, int i, t_struct *p, va_list argstr)
{
	if (ft_find_types(s[i], -1) == 1)
		i = ft_init_flags(s, i, p);
	if (ft_find_types(s[i], -1) == 2)
		i = ft_init_width(s, i, p);
	if (ft_find_types(s[i], -1) == 3)
		i = ft_init_precision(s, i, p);
	if (ft_find_types(s[i], -1) == 4)
		i = ft_init_modific(s, i, p);
	if (ft_find_types(s[i], -1) == 5)
		i = ft_init_specific(s, i, argstr, p);
	return (i);
}