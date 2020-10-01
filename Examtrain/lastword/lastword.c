/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrandje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 20:18:42 by lgrandje          #+#    #+#             */
/*   Updated: 2020/10/01 20:49:01 by lgrandje         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	isblank(int b)
{
	if (b == ' ' || b == '\t')
		return (1);
	return (0);
}

int main(int ac, char** av)
{
	int i;
	char tmp;

	i = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i])
	{
		i++;
	}
	i--;
	while(isblank(av[1][i]))
	{
		i--;
	}
	while(av[1][i] && !isblank(av[1][i]))
	{
		i--;
	}
	i++;
	while (av[1][i])
	{
		tmp = av[1][i];
		write(1, &tmp, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
