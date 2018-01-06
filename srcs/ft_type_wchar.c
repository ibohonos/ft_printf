/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_wchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 22:30:57 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/07 00:02:18 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_bits_help_1(char *s, wchar_t *wchar, int *x, int *y)
{
	s[(*y)++] = (char)(((wchar[(*x)] & 0x07c0) >> 6) + 0xc0);
	s[(*y)++] = (char)((wchar[(*x)] & 0x003F) + 0x80);
	return (s);
}

char	*ft_bits_help_2(char *s, wchar_t *wchar, int *x, int *y)
{
	s[(*y)++] = (char)(((wchar[(*x)] & 0xF000) >> 12) + 0xE0);
	s[(*y)++] = (char)(((wchar[(*x)] & 0x0Fc0) >> 6) + 0x80);
	s[(*y)++] = (char)((wchar[(*x)] & 0x003F) + 0x80);
	return (s);
}

char	*ft_bits_help_3(char *s, wchar_t *wchar, int *x, int *y)
{
	s[(*y)++] = (char)(((wchar[(*x)] & 0x1c0000) >> 18) + 0xF0);
	s[(*y)++] = (char)(((wchar[(*x)] & 0x03F000) >> 12) + 0x80);
	s[(*y)++] = (char)(((wchar[(*x)] & 0x0Fc0) >> 6) + 0x80);
	s[(*y)++] = (char)((wchar[(*x)] & 0x003F) + 0x80);
	return (s);
}

int		ft_count_len_bits(wchar_t *wchar)
{
	int i;
	int l;

	i = -1;
	l = 0;
	while (wchar[++i])
	{
		if (wchar[i] <= 0x7F)
			l++;
		else if (wchar[i] <= 0x7FF)
			l += 2;
		else if (wchar[i] <= 0xFFFF)
			l += 3;
		else if (wchar[i] <= 0x1FFFFF)
			l += 4;
	}
	return (l);
}

void	ft_type_wchar(wchar_t *wchar, t_struct *p, int x, int y)
{
	int i;

	if (!wchar)
	{
		ft_putstr("(null)");
		p->ret_len += 6;
		return ;
	}
	p->buffer = ft_strnew(ft_count_len_bits(wchar));
	while (wchar[++x])
	{
		if (wchar[x] <= 0x7F)
			p->buffer[y++] = wchar[x];
		else if (wchar[x] <= 0x7FF)
			p->buffer = ft_bits_help_1(p->buffer, wchar, &x, &y);
		else if (wchar[x] <= 0xFFFF)
			p->buffer = ft_bits_help_2(p->buffer, wchar, &x, &y);
		else if (wchar[x] <= 0x1FFFFF)
			p->buffer = ft_bits_help_3(p->buffer, wchar, &x, &y);
	}
	p->buffer[y] = '\0';
	if (p->minus == -1)
		ft_print_width(p, ft_count_len_bits(wchar));
	if (p->precision != -1 && p->width != -1)
	{
		i = p->precision - ft_count_len_bits(wchar);
		if (i < 0)
			p->ret_len += ft_count_len_bits(wchar) - p->precision;
		while (i-- > 0)
			ft_putchar(' ');
	}
	else if (p->precision != -1 && p->width == -1)
		p->ret_len = (p->ret_len - p->precision) + ft_count_len_bits(wchar);
	// if (p->precision != -1 && p->precision < ft_count_len_bits(wchar))
	// {
	// 	p->buffer = ft_strsub(wchar, 0, p->precision);
	// 	ft_putstr(p->buffer);
	// 	free(p->buffer);
	// 	p->ret_len -= ft_count_len_bits(wchar) - p->precision;
	// }
	// else
		ft_putstr(p->buffer);
	p->ret_len += ft_strlen(p->buffer);
	free(p->buffer);
}
