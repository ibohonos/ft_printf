/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 16:36:24 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/04 16:58:57 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define SPEC "sSpdDioOuUxXcC"

# include "libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_find_types(char format);
int	ft_init_flags(char *format, int i);

#endif
