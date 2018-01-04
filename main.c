/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 16:15:08 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/03 00:24:32 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int i = 0;
	int j = 0;
	// unsigned long long x = 9223372036854775808;
	long x = 2147483647;

	i = ft_printf("my:printf:\n%%d\t%d\n%%s\t%s\n\
%%c\t%c\n%%i\t%i\n%%d\t%d\n%%f\t%f\n%%-8.5d\t%-8.5d\n%%.05d\t%.05d\n%%8.5d\t\
%8.5d\n%%x\t%x\n%%o\t%o\n%%u\t%u\n%%X\t%X\n\n",
123, "Hello world!", 'g', 987, 0x41, 16.04, 568, 178, 951, 42, -750, -158,
-253);
	j = printf("it:printf:\n%%d\t%d\n%%s\t%s\n\
%%c\t%c\n%%i\t%i\n%%d\t%d\n%%f\t%f\n%%-8.5d\t%-8.5d\n%%.05d\t%.05d\n%%8.5d\t\
%8.5d\n%%x\t%x\n%%o\t%o\n%%u\t%u\n%%X\t%X\n\n",
123, "Hello world!", 'g', 987, 0x41, 16.04, 568, 178, 951, 42, -750, -158,
-253);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%%5.2s\t%5.2s is a string\n", "this");
	j = printf("%%5.2s\t%5.2s is a string\n", "this");
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%%5.2x\t%5.2x\n", 5427);
	j = printf("%%5.2x\t%5.2x\n", 5427);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%#8x\n", 42);
	j = printf("%#8x\n", 42);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%%hU\t%hU\n", 4294967296);
	j = printf("%%ld\t%ld\n", 4294967296);
	printf("i = %d\nj = %d\n\n", i, j);
	// i = ft_printf("%llu\n", 4999999999);
	// j = printf("%llu\n", 4999999999);
	// i = ft_printf("%llx\n", x);
	// j = printf("%llx\n", x);
	i = ft_printf("%jx\n", 4294967295);
	j = printf("%jx\n", 4294967295);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%ld\n", x);
	j = printf("%ld\n", x);
	printf("i = %d\nj = %d\n\n", i, j);
	return (0);
}
