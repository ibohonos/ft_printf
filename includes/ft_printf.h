/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 16:36:24 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/03 00:39:19 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define SPEC "sSpdDioOuUxXcC"
# define BONUS_SPEC "eEfFgGaAn"
# define MODIFICATORS "hljz"
# define FLAGS "#0-+ "

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct	s_struct
{
	int			sharp;
	int			zero;
	int			minus;
	int			plus;
	int			space;
	int			width;
	int			precision;
	int			spec_h;
	int			spec_hh;
	int			spec_l;
	int			spec_ll;
	int			spec_j;
	int			spec_z;
	char		*buffer;
	int			ret_len;
}				t_struct;

int				ft_atoi(const char *nptr);
int				ft_strcmp(const char *s1, const char *s2);
void			ft_putchar(char c);
void			ft_putnbr(int n);
void			ft_putstr(char const *s);
void			ft_strdel(char **as);
char			*ft_strnew(size_t size);
char			*ft_strdup(const char *s);
char			*ft_strstr(const char *str1, const char *str2);
size_t			ft_strlen(const char *s);
int				ft_toupper(int c);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
void			ft_init_default_all(t_struct *p);
int				ft_count_nbrs(int nbr);
int				ft_printf(const char *format, ...);
int				ft_find_types(char format, int i);
int				ft_find(char *s, int i, char c);
int				ft_init_specific(char *format, int i, va_list argstr,
				t_struct *p);
int				ft_init_modific(char *str, int i, t_struct *p);
int				ft_init_flags(char *str, int i, t_struct *p);
void			ft_type_d(int type_d, t_struct *p);
void			ft_type_s(char *s, t_struct *p);
void			ft_type_c(char c, t_struct *p);
void			ft_type_f(double type_f, t_struct *p);
char			*ft_itoa_base(intmax_t n, int base);
char			*ft_unsigned_itoa_base(uintmax_t n, int base);
int				ft_init_precision(char *s, int i, t_struct *p);
int				ft_init_width(char *s, int i, t_struct *p);
void			ft_print_width(t_struct *p, int all);
int				ft_init_types(char *s, int i, t_struct *p, va_list argstr);
int				ft_is_spec(t_struct *p);
void			ft_type_x(unsigned int type_x, t_struct *p, int b);
void			ft_type_o(unsigned int type_x, t_struct *p);
void			ft_type_u(unsigned int type_x, t_struct *p);
void			ft_type_lu(unsigned long type_lu, t_struct *p);
void			ft_type_llu(unsigned long long type_llu, t_struct *p);
void			ft_type_hu(unsigned short type_hu, t_struct *p);
void			ft_type_hhu(unsigned char type_hhu, t_struct *p);
void			ft_type_ju(uintmax_t type_ju, t_struct *p);
void			ft_type_zu(size_t type_zu, t_struct *p);
void			ft_type_lx(unsigned long type_lx, t_struct *p);
void			ft_type_llx(unsigned long long type_llx, t_struct *p);
void			ft_type_hx(unsigned short type_hx, t_struct *p);
void			ft_type_hhx(unsigned char type_hhx, t_struct *p);
void			ft_type_jx(uintmax_t type_jx, t_struct *p);
void			ft_type_zx(size_t type_zx, t_struct *p);
void			ft_type_ld(long type_ld, t_struct *p);
void			ft_type_lld(long long type_lld, t_struct *p);
void			ft_type_hd(short type_hd, t_struct *p);
void			ft_type_hhd(signed char type_hhd, t_struct *p);
void			ft_type_jd(intmax_t type_jd, t_struct *p);
void			ft_type_zd(long type_zd, t_struct *p);

#endif
