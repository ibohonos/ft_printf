/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/27 22:09:04 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/28 00:27:16 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char		*ft_strupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = ft_toupper(s[i]);
		i++;
	}
	return (s);
}

void	ft_type_x(unsigned int type_x, t_struct *p, int b)
{
	int i;

	i = ft_strlen(ft_itoa_base(type_x, 16));
	p->buffer = (char *)malloc(sizeof(char) * i + 1);
	p->buffer = ft_itoa_base(type_x, 16);
	if (b == 1)
		p->buffer = ft_strupper(p->buffer);
	ft_putstr(p->buffer);
	free(p->buffer);
	p->buffer = NULL;
	p->ret_len += i;
}
