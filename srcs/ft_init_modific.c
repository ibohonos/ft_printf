/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_modific.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 17:57:39 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/07 21:25:51 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_init_modific(char *str, int i, va_list argstr, t_struct *p)
{
    p->ret_len += 0;
	argstr = NULL;
	if (str[i] == ' ')
		return (i);
	return (i);
}
