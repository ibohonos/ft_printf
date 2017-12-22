/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_width.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 20:16:27 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/22 16:23:00 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_init_width(char *s, int i, t_struct *p)
{
	if (s[i] >= '0' && s[i] <= '9')
	{
		if (s[i] == '0')
			p->zero = 1;
		p->width = ft_atoi(s + i);
		while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
			i++;
	}
	if (p->width != -1)
		p->ret_len += p->width;
	return (i);
}
