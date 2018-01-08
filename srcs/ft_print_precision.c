/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_precision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 21:07:13 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/08 19:30:51 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_precision(t_struct *p, int all)
{
	int i;

	i = p->precision - all;
	// printf("\ni = %d\n", i);
	if (i < 0)
		p->ret_len += all - p->precision;
	while (i-- > 0)
		ft_putchar('0');
}
