/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 16:35:49 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/03 18:58:46 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	argstr;
	char	*str;
	int		i;

	va_start(argstr, format);
	str = format;
	i = 0;
	while (*str != '\0')
	{
		if (*str == '%' && *(str + 1) == '\0')
			break ;
		if (*str == '%' && ft_find_types(str + 1) > 0)
			str = ft_init_flags(format, i);
		if (*str != '%')
			str++;
	}
	va_end(argstr);
	return (i);
}
