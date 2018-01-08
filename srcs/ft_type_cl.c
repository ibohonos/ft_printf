/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_cl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 22:30:57 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/08 17:26:01 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_bit_help_1(char *s, wchar_t wchar, int *y)
{
	s[(*y)++] = (char)(((wchar & 0x07c0) >> 6) + 0xc0);
	s[(*y)++] = (char)((wchar & 0x003F) + 0x80);
	return (s);
}

char	*ft_bit_help_2(char *s, wchar_t wchar, int *y)
{
	s[(*y)++] = (char)(((wchar & 0xF000) >> 12) + 0xE0);
	s[(*y)++] = (char)(((wchar & 0x0Fc0) >> 6) + 0x80);
	s[(*y)++] = (char)((wchar & 0x003F) + 0x80);
	return (s);
}

char	*ft_bit_help_3(char *s, wchar_t wchar, int *y)
{
	s[(*y)++] = (char)(((wchar & 0x1c0000) >> 18) + 0xF0);
	s[(*y)++] = (char)(((wchar & 0x03F000) >> 12) + 0x80);
	s[(*y)++] = (char)(((wchar & 0x0Fc0) >> 6) + 0x80);
	s[(*y)++] = (char)((wchar & 0x003F) + 0x80);
	return (s);
}

int		ft_count_len_bit(wchar_t wchar)
{
	int i;
	int l;

	i = -1;
	l = 0;
	if (wchar)
	{
		if (wchar <= 0x7F)
			l++;
		else if (wchar <= 0x7FF)
			l += 2;
		else if (wchar <= 0xFFFF)
			l += 3;
		else if (wchar <= 0x1FFFFF)
			l += 4;
	}
	return (l);
}

void	ft_type_cl(char wchar, t_struct *p)
{
	int i;
	int y;

	y = 0;
	if (!wchar)
	{
		write(1, "\0", 1);
		// ft_putstr("");
		p->ret_len++;
		return ;
	}
	if (p->minus == -1)
	ft_print_width(p, 1);
	if (p->precision != -1 && p->width != -1)
	{
		i = p->precision - 1;
		if (i < 0)
		p->ret_len += 1 - p->precision;
		while (i-- > 0)
		ft_putchar(' ');
	}
	else if (p->precision != -1 && p->width == -1)
		p->ret_len = (p->ret_len - p->precision) + 1;
	p->buffer = ft_strnew(ft_count_len_bit((wchar_t)wchar));
	if ((wchar_t)wchar <= 0x7F)
		ft_putchar(wchar);
	else if ((wchar_t)wchar <= 0x7FF)
		p->buffer = ft_bit_help_1(p->buffer, (wchar_t)wchar, &y);
	else if ((wchar_t)wchar <= 0xFFFF)
		p->buffer = ft_bit_help_2(p->buffer, (wchar_t)wchar, &y);
	else if ((wchar_t)wchar <= 0x1FFFFF)
		p->buffer = ft_bit_help_3(p->buffer, (wchar_t)wchar, &y);
	p->buffer[y] = '\0';
	ft_putstr(p->buffer);
	// ft_putchar(wchar);
	if (p->width == -1)
		p->ret_len++;
	free(p->buffer);
}
