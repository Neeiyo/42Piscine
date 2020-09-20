/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrandje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 10:24:04 by lgrandje          #+#    #+#             */
/*   Updated: 2020/09/13 14:18:29 by lgrandje         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a)
{
	int		b;

	b = a / 10;
	b = '0' + b;
	write(1, &b, 1);
	b = a % 10;
	b = '0' + b;
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 00;
	j = 01;
	while (i <= 98)
	{
		while (j <= 99)
		{
			print(i);
			write(1, " ", 1);
			print(j);
			if (j <= 98 || i <= 97)
				write(1, ", ", 2);
			j++;
		}
		i++;
		j = i + 1;
	}
}
