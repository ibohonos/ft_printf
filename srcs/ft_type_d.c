/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 04:53:28 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/05 05:03:44 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_count_nbr(int nbr)
{
	int i;

	i = 0;
	while (nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	return (++i);
}

void	ft_type_d(int type_d, t_struct *p)
{
	ft_putnbr(type_d);
	p->ret_len += ft_count_nbr(type_d);
}
