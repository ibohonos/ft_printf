/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 16:15:08 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/22 13:07:08 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int i = 0;
	int j = 0;

	i = ft_printf("my:printf:\n%%d\t%d\n%%s\t%s\n\
%%c\t%c\n%%i\t%i\n%%d\t%d\n%%f\t%f\n%%09d\t%09d\n%%.02d\t%.02d\n\n",
123, "Hello world!", 'g', 987, 0x41, 16.04, 4568, 178);
	j = printf("it:printf:\n%%d\t%d\n%%s\t%s\n\
%%c\t%c\n%%i\t%i\n%%d\t%d\n%%f\t%f\n%%09d\t%09d\n%%.02d\t%.02d\n\n",
123, "Hello world!", 'g', 987, 0x41, 16.04, 4568, 178);
	// ft_printf("%%");
	// printf("\n");
	// i = ft_printf("%\n");
	// j = printf("%\n");
	printf("i = %d\nj = %d\n", i, j);
	// printf("%s\n", ft_itoa_base(254, 16));
	printf("%d\n", ft_printf("%.2d", 4242));
	printf("%d\n", printf("\n%.2d", 4242));
	return (0);
}
