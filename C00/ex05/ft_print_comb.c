/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrandje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 16:38:43 by lgrandje          #+#    #+#             */
/*   Updated: 2020/09/12 16:20:54 by lgrandje         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c)
{
	write(1, &c, 1);
	write(1, &b, 1);
	write(1, &a, 1);
	if (c != '7')
		write(1, ",  ", 2);
}

void	ft_print_comb(void)
{
	char a;
	char c;
	char b;

	c = '0';
	while (c <= '7')
	{
		b = c + 1;
		while (b <= '8')
		{
			a = b + 1;
			while (a <= '9')
			{
				print(a, b, c);
				a++;
			}
			b++;
		}
		c++;
	}
}
