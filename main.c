/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 16:15:08 by ibohonos          #+#    #+#             */
/*   Updated: 2017/12/08 12:51:50 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int i;
	int j;

	i = ft_printf("ft_printf\t%%d\t%d\t%s\t%c\t%i\t%d\t%f\n", 123, "Hello world!", 'g', 987, 0x41, 16.05);
	j = printf("printf:\t\t%%d\t%d\t%s\t%c\t%i\t%d\t%f\n", 123, "Hello world!", 'g', 987, 0x41, 16.05);

	printf("i = %d\nj = %d\n", i, j);
	return (0);
}
