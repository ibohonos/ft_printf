/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_specific.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 16:55:57 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/06 23:06:33 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_spec_u(char *format, int i, va_list argstr, t_struct *p)
{
	if (format[i] == 'U' || (format[i] == 'u' && p->spec_l != 0))
		ft_type_lu(va_arg(argstr, unsigned long), p);
	else if (format[i] == 'u' && p->spec_ll != 0)
		ft_type_llu(va_arg(argstr, unsigned long long), p);
	else if (format[i] == 'u' && p->spec_h != 0)
		ft_type_hu((unsigned short)va_arg(argstr, int), p);
	else if (format[i] == 'u' && p->spec_hh != 0)
		ft_type_hhu((unsigned char)va_arg(argstr, int), p);
	else if (format[i] == 'u' && p->spec_j != 0)
		ft_type_ju(va_arg(argstr, uintmax_t), p);
	else if (format[i] == 'u' && p->spec_z != 0)
		ft_type_zu(va_arg(argstr, size_t), p);
	return (i);
}

int	ft_spec_x(char *format, int i, va_list argstr, t_struct *p)
{
	if (format[i] == 'x' && p->spec_l != 0)
		ft_type_lx(va_arg(argstr, unsigned long), p, 0);
	else if (format[i] == 'x' && p->spec_ll != 0)
		ft_type_llx(va_arg(argstr, unsigned long long), p, 0);
	else if (format[i] == 'x' && p->spec_h != 0)
		ft_type_hx((unsigned short)va_arg(argstr, int), p, 0);
	else if (format[i] == 'x' && p->spec_hh != 0)
		ft_type_hhx((unsigned char)va_arg(argstr, int), p, 0);
	else if (format[i] == 'x' && p->spec_j != 0)
		ft_type_jx(va_arg(argstr, uintmax_t), p, 0);
	else if (format[i] == 'x' && p->spec_z != 0)
		ft_type_zx(va_arg(argstr, size_t), p, 0);
	return (i);
}

int	ft_spec_lx(char *format, int i, va_list argstr, t_struct *p)
{
	if (format[i] == 'X' && p->spec_l != 0)
		ft_type_lx(va_arg(argstr, unsigned long), p, 1);
	else if (format[i] == 'X' && p->spec_ll != 0)
		ft_type_llx(va_arg(argstr, unsigned long long), p, 1);
	else if (format[i] == 'X' && p->spec_h != 0)
		ft_type_hx((unsigned short)va_arg(argstr, int), p, 1);
	else if (format[i] == 'X' && p->spec_hh != 0)
		ft_type_hhx((unsigned char)va_arg(argstr, int), p, 1);
	else if (format[i] == 'X' && p->spec_j != 0)
		ft_type_jx(va_arg(argstr, uintmax_t), p, 1);
	else if (format[i] == 'X' && p->spec_z != 0)
		ft_type_zx(va_arg(argstr, size_t), p, 1);
	return (i);
}

int	ft_spec_o(char *format, int i, va_list argstr, t_struct *p)
{
	if (format[i] == 'o' && p->spec_l != 0)
		ft_type_lo(va_arg(argstr, unsigned long), p);
	else if (format[i] == 'o' && p->spec_ll != 0)
		ft_type_llo(va_arg(argstr, unsigned long long), p);
	else if (format[i] == 'o' && p->spec_h != 0)
		ft_type_ho((unsigned short)va_arg(argstr, int), p);
	else if (format[i] == 'o' && p->spec_hh != 0)
		ft_type_hho((unsigned char)va_arg(argstr, int), p);
	else if (format[i] == 'o' && p->spec_j != 0)
		ft_type_jo(va_arg(argstr, uintmax_t), p);
	else if (format[i] == 'o' && p->spec_z != 0)
		ft_type_zo(va_arg(argstr, size_t), p);
	return (i);
}

int	ft_spec_d(char *format, int i, va_list argstr, t_struct *p)
{
	if (format[i] == 'd' && p->spec_l != 0)
		ft_type_ld(va_arg(argstr, long), p);
	else if (format[i] == 'd' && p->spec_ll != 0)
		ft_type_lld(va_arg(argstr, long long), p);
	else if (format[i] == 'd' && p->spec_h != 0)
		ft_type_hd((short)va_arg(argstr, int), p);
	else if (format[i] == 'd' && p->spec_hh != 0)
		ft_type_hhd((signed char)va_arg(argstr, int), p);
	else if (format[i] == 'd' && p->spec_j != 0)
		ft_type_jd(va_arg(argstr, intmax_t), p);
	else if (format[i] == 'd' && p->spec_z != 0)
		ft_type_zd(va_arg(argstr, long), p);
	return (i);
}

int	ft_spec_n(char *format, int i, va_list argstr, t_struct *p)
{
	if (format[i] == 'n' && p->spec_l != 0)
		ft_type_ln(va_arg(argstr, long *), p);
	else if (format[i] == 'n' && p->spec_ll != 0)
		ft_type_lln(va_arg(argstr, long long *), p);
	else if (format[i] == 'n' && p->spec_h != 0)
		ft_type_hn((short *)va_arg(argstr, int *), p);
	else if (format[i] == 'n' && p->spec_hh != 0)
		ft_type_hhn((signed char *)va_arg(argstr, int *), p);
	else if (format[i] == 'n' && p->spec_j != 0)
		ft_type_jn(va_arg(argstr, intmax_t *), p);
	else if (format[i] == 'n' && p->spec_z != 0)
		ft_type_zn(va_arg(argstr, size_t *), p);
	return (i);
}

int	ft_basic_spec(char *format, int i, va_list argstr, t_struct *p)
{
	if ((format[i] == 'd' || format[i] == 'D' || format[i] == 'i')
		&& ft_is_spec(p) == 0)
		ft_type_d(va_arg(argstr, int), p);
	else if (format[i] == 's' && ft_is_spec(p) == 0)
		ft_type_s(va_arg(argstr, char *), p);
	else if ((format[i] == 'S' && ft_is_spec(p) == 0) || (format[i] == 's'
		&& p->spec_l))
		ft_type_wchar(va_arg(argstr, wchar_t *), p, -1, 0);
	else if (format[i] == 'c' && ft_is_spec(p) == 0)
		ft_type_c(va_arg(argstr, int), p);
	else if ((format[i] == 'f' || format[i] == 'F') && ft_is_spec(p) == 0)
		ft_type_f(va_arg(argstr, double), p);
	else if (format[i] == 'x' && ft_is_spec(p) == 0)
		ft_type_x(va_arg(argstr, unsigned int), p, 0);
	else if (format[i] == 'X' && ft_is_spec(p) == 0)
		ft_type_x(va_arg(argstr, unsigned int), p, 1);
	else if ((format[i] == 'o' || format[i] == 'O') && ft_is_spec(p) == 0)
		ft_type_o(va_arg(argstr, unsigned int), p);
	else if (format[i] == 'u' && ft_is_spec(p) == 0)
		ft_type_u(va_arg(argstr, unsigned int), p);
	else if (format[i] == 'n' && ft_is_spec(p) == 0)
		ft_type_n(va_arg(argstr, int *), p);
	else if (format[i] == 'p')
		ft_type_p(va_arg(argstr, long long), p);
	return (i);
}

int	ft_init_specific(char *format, int i, va_list argstr, t_struct *p)
{
	i = ft_spec_u(format, i, argstr, p);
	i = ft_spec_x(format, i, argstr, p);
	i = ft_spec_lx(format, i, argstr, p);
	i = ft_spec_d(format, i, argstr, p);
	i = ft_spec_n(format, i, argstr, p);
	i = ft_spec_o(format, i, argstr, p);
	i = ft_basic_spec(format, i, argstr, p);
	return (i);
}
