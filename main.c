/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 16:15:08 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/28 00:01:00 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int i = 0;
	int j = 0;

	i = ft_printf("my:printf:\n%%d\t%d\n%%s\t%s\n\
%%c\t%c\n%%i\t%i\n%%d\t%d\n%%f\t%f\n%%-8.5d\t%-8.5d\n%%.05d\t%.05d\n%%8.5d\t\
%8.5d\n%%x\t%x\n%%o\t%o\n%%u\t%u\n%%X\t%X\n\n",
123, "Hello world!", 'g', 987, 0x41, 16.04, 568, 178, 951, -254, -750, -158,
-253);
	j = printf("it:printf:\n%%d\t%d\n%%s\t%s\n\
%%c\t%c\n%%i\t%i\n%%d\t%d\n%%f\t%f\n%%-8.5d\t%-8.5d\n%%.05d\t%.05d\n%%8.5d\t\
%8.5d\n%%x\t%x\n%%o\t%o\n%%u\t%u\n%%X\t%X\n\n",
123, "Hello world!", 'g', 987, 0x41, 16.04, 568, 178, 951, -254, -750, -158,
-253);
	printf("i = %d\nj = %d\n", i, j);
	i = ft_printf("%%4.5d\t%4.5d is a number\n", 586);
	j = printf("%%4.5d\t%4.5d is a number\n", 586);
	printf("i = %d\nj = %d\n", i, j);
	// printf("%s\n", ft_itoa_base(-254, 16));
	return (0);
}
