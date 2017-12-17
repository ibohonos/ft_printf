/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_modific.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 17:57:39 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/18 00:19:53 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_init_modific(char *str, int i, t_struct *p)
{
	if (ft_find(str, &i, 'h') / 2 != 1 && ft_find(str, &i, 'h') != 0
		&& p->spec_hh == 0)
		p->spec_h = 1;
	else if (ft_find(str, &i, 'h') / 2 == 1 && ft_find(str, &i, 'h') != 0)
	{
		p->spec_h = 0;
		p->spec_hh = 1;
	}
	if (ft_find(str, &i, 'l') / 2 != 1 && ft_find(str, &i, 'l') != 0
		&& p->spec_ll == 0)
		p->spec_l = 1;
	else if (ft_find(str, &i, 'l') / 2 == 1 && ft_find(str, &i, 'l') != 0)
	{
		p->spec_l = 0;
		p->spec_ll = 1;
	}
	if (ft_strstr(s, 'j'))
		p->spec_j = 1;
	if (ft_strstr(s, 'z'))
		p->spec_z = 1;
	return (i);
}
