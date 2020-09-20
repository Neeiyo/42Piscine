/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrandje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 11:27:55 by lgrandje          #+#    #+#             */
/*   Updated: 2020/09/18 12:55:35 by lgrandje         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}
void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb*- 1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}

int main()
{
	ft_putnbr(-24);
	return(0);
}
