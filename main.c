/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 16:15:08 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/20 19:25:43 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int i = 0;
	int j = 0;

	i = ft_printf("my:printf:\n%%d\t%d\n%%s\t%s\n\
%%c\t%c\n%%i\t%i\n%%d\t%d\n%%f\t%f\n%%9d\t%9d\n%%.14d\t%.14d\n\n",
123, "Hello world!", 'g', 987, 0x41, 16.04, 4568, 17);
	j = printf("it:printf:\n%%d\t%d\n%%s\t%s\n\
%%c\t%c\n%%i\t%i\n%%d\t%d\n%%f\t%f\n%%9d\t%9d\n%%.14d\t%.14d\n\n",
123, "Hello world!", 'g', 987, 0x41, 16.04, 4568, 17);
	ft_printf("%%");
	printf("\n");
	// i = ft_printf("%\n");
	// j = printf("%\n");
	printf("i = %d\nj = %d\n", i, j);
	printf("%s\n", ft_itoa_base(254, 16));
	return (0);
}
