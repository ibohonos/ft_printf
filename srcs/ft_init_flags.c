/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 16:55:57 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/13 13:58:31 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_init_flags(char *str, int i, va_list argstr, t_struct *p)
{
    p->ret_len += 1;
	argstr = NULL;
	if (str[i] == ' ')
		return (i);
	return (i);
}
