/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 16:15:08 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/13 16:06:09 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int i;
	int j;

	i = ft_printf("ft_printf\n%%d\t%d\n%%s\t%s\n%%c\t%c\n%%i\t%i\n%%d\t%d\n%%f\t%f\n@moulitest: %.10d\n\n", 123, "Hello world!", 'g', 987, 0x41, 16.04, -42);
	j = printf("printf:\n%%d\t%d\n%%s\t%s\n%%c\t%c\n%%i\t%i\n%%d\t%d\n%%f\t%f\n@moulitest: %.10d\n\n", 123, "Hello world!", 'g', 987, 0x41, 16.04, -42);
	printf("i = %d\nj = %d\n", i, j);
	return (0);
}
