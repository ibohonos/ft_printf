/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 16:15:08 by ibohonos          #+#    #+#             */
/*   Updated: 2018/01/09 08:34:22 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <locale.h>
#include <limits.h>

int	main(void)
{
	int i = 0;
	int j = 0;
	long x = 2147483647;
	long long h1;
	unsigned long long h2;

	setlocale(LC_ALL, "");
	h2 = 9223372036854775807;
	i = ft_printf("my:printf:\n%%d\t%d\n%%s\t%s\n\
%%c\t%c\n%%i\t%i\n%%d\t%d\n%%f\t%f\n%%-8.5d\t%-8.5d\n%%.05d\t%.05d\n%%8.5d\t\
%8.5d\n%%x\t%x\n%%o\t%o\n%%u\t%u\n%%X\t%X\n%%lln\t%lln\n%%p\t%p\n\n",
123, "Hello world!", 'g', 987, 0x41, 16.04, 568, 178, 951, 42, -750, -158,
-253, &h1, &h2);
	j = printf("it:printf:\n%%d\t%d\n%%s\t%s\n\
%%c\t%c\n%%i\t%i\n%%d\t%d\n%%f\t%f\n%%-8.5d\t%-8.5d\n%%.05d\t%.05d\n%%8.5d\t\
%8.5d\n%%x\t%x\n%%o\t%o\n%%u\t%u\n%%X\t%X\n%%lln\t%lln\n%%p\t%p\n\n",
123, "Hello world!", 'g', 987, 0x41, 16.04, 568, 178, 951, 42, -750, -158,
-253, &h2, &h2);
	printf("h1 = %lld\n", h1);
	printf("h2 = %lld\n", h2);
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
	// sleep(5);
	i = ft_printf("%%hU\t%hU\n", 4294967296);
	j = printf("%%ld\t%ld\n", 4294967296);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%jx\n", 4294967295);
	j = printf("%jx\n", 4294967295);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%ld\n", x);
	j = printf("%ld\n", x);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%p\n", &i);
	j = printf("%p\n", &i);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%   Privet\n", "test");
	j = printf("%   Privet\n", "test");
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("my: %.5Hello\n");
	j = printf("it: %.5Hello\n");
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("% 5u\n", 25);
	j = printf("% 5u\n", 25);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%-5.10o\n", 2500);
	j = printf("%-5.10o\n", 2500);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%S\n", L"✓✓✓");
	j = printf("%S\n", L"✓✓✓");
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%S\n", L"åœ∑´®†¥¨ˆøπ");
	j = printf("%S\n", L"åœ∑´®†¥¨ˆøπ");
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("He\x1B[0;31mllllll\x1B[0mo\n");
	j = printf("He\033[0;31mllllll\x1B[0mo\n");
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%p\n", &h1);
	j = printf("%p\n", &h1);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%%+10.5d\t%+10.5d\n", 4242);
	j = printf("%%+10.5d\t%+10.5d\n", 4242);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%jd\n", 9223372036854775808);
	j = printf("%jd\n", 9223372036854775808);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%#015b\n", 125);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%%%%%%%%%%\n");
	j = printf("%%%%%%%%%%\n");
	printf("\ni = %d\nj = %d\n\n", i, j);
	// i = printf("%hhd%hhd", 1, 42);
	i = ft_printf("%#o\n", 0);
	j = printf("%#o\n", 0);
	printf("\ni = %d\nj = %d\n\n", i, j);
	i = ft_printf("%C\n", 0);
	j = printf("%C\n", 0);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%C\n", L'çM-^L«');
	j = printf("%C\n", L'çM-^L«');
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%s %C %d %p %x %% %S\n", "bonjour ", L'è©²', 42, &free, 42, L"ÙM-^DØ­ÙM-^E Ø®ÙM-^FØ");
	j = printf("%s %C %d %p %x %% %S\n", "bonjour ", L'è©²', 42, &free, 42, L"ÙM-^DØ­ÙM-^E Ø®ÙM-^FØ");
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%ld%ld\n", 0, 42);
	j = printf("%ld%ld\n", 0, 42);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("{%05p}\n", 0);
	j = printf("{%05p}\n", 0);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("{%-30S}\n", L"æM-M-^QæM-^X¯ä¸M-åM-^OªçM-^L«ãM-M-^B");
	j = printf("{%-30S}\n", L"æM-M-^QæM-^X¯ä¸M-åM-^OªçM-^L«ãM-M-^B");
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%#O\n", 1);
	j = printf("%#O\n", 1);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("{% 03d}\n", 0);
	j = printf("{% 03d}\n", 0);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%+o\n", 42);
	j = printf("%+o\n", 42);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("{%15.4d}\n", -424242);
	j = printf("{%15.4d}\n", -424242);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%O\n", LONG_MAX);
	j = printf("%O\n", LONG_MAX);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%.4d\n", -424242);
	j = printf("%.4d\n", -424242);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("{%4.15d}\n", 424242);
	j = printf("{%4.15d}\n", 424242);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%4.8d\n", 424242424);
	j = printf("%4.8d\n", 424242424);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%4.15d\n", -42);
	j = printf("%4.15d\n", -42);
	printf("i = %d\nj = %d\n\n", i, j);
	i = ft_printf("%4.15d\n", -424242);
	j = printf("%4.15d\n", -424242);
	printf("i = %d\nj = %d\n\n", i, j);
	return (0);
}
