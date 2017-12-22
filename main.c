/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 16:15:08 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/22 20:23:16 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int i = 0;
	int j = 0;

	i = ft_printf("my:printf:\n%%d\t%d\n%%s\t%s\n\
%%c\t%c\n%%i\t%i\n%%d\t%d\n%%f\t%f\n%%09d\t%09d\n%%.05d\t%.05d\n\n",
123, "Hello world!", 'g', 987, 0x41, 16.04, 4568, 178);
	j = printf("it:printf:\n%%d\t%d\n%%s\t%s\n\
%%c\t%c\n%%i\t%i\n%%d\t%d\n%%f\t%f\n%%09d\t%09d\n%%.05d\t%.05d\n\n",
123, "Hello world!", 'g', 987, 0x41, 16.04, 4568, 178);
	printf("i = %d\nj = %d\n", i, j);
	i = ft_printf("%5.2d is a number\n", 586);
	j = printf("%5.2d is a number\n", 586);
	printf("i = %d\nj = %d\n", i, j);
	// printf("%s\n", ft_itoa_base(254, 16));
	return (0);
}
