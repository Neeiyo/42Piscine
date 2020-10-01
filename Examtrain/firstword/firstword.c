/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrandje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 18:36:56 by lgrandje          #+#    #+#             */
/*   Updated: 2020/10/01 19:21:27 by lgrandje         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char** av)
{
	int i;
	char* dest;
	char tmp;

	i = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i] == 32)
		i++;
	while(av[1][i])
	{
		tmp = av[1][i];
		if (tmp == 32)
			return (0);
		write(1, &tmp, 1);
		i++;
	}
	return (0);
}
