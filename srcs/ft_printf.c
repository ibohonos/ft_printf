/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 16:35:49 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/04 19:10:25 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	argstr;
	char	*str;
	int		i;

	va_start(argstr, format);
	str = (char *)format;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] == '\n')
			i++;
		if (str[i] == '%' && str[i + 1] == '\0')
			break ;
		if (str[i] == '%' && ft_find_types(str[i + 1]) > 0)
			ft_init_flags(str, i);
		if (str[i] != '%' && str[i])
			ft_putchar(str[i]);
		i++;
	}
	va_end(argstr);
	return (i);
}
