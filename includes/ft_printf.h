/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 16:36:24 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/20 17:46:17 by ibohonos         ###   ########.fr       */
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
void			ft_init_default_all(t_struct *p);
int				ft_count_nbrs(int nbr);
int				ft_printf(const char *format, ...);
int				ft_find_types(char format, int i);
int				ft_find(char *s, int *i, char c);
int				ft_init_specific(char *format, int i, va_list argstr,
				t_struct *p);
int				ft_init_modific(char *str, int i, t_struct *p);
int				ft_init_flags(char *str, int i, t_struct *p);
void			ft_type_d(int type_d, t_struct *p);
void			ft_type_s(char *s, t_struct *p);
void			ft_type_c(char c, t_struct *p);
void			ft_type_f(double type_f, t_struct *p);
char			*ft_itoa_base(intmax_t n, int base);
int				ft_init_precision(char *s, int i, t_struct *p);
int				ft_init_width(char *s, int i, t_struct *p);

#endif
