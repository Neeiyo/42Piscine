/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrandje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:03:04 by lgrandje          #+#    #+#             */
/*   Updated: 2020/10/01 19:15:43 by lgrandje         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char** av)
{
	int erieur;
	char iot;

	erieur = 0;
	if (ac != 2)
		return (0);
	while(av[1][erieur])
	{
		iot = av[1][erieur];
		if (!(iot >= 'a' && iot <= 'z') || (iot >= 'A' && iot <= 'Z'))
			write(1, &iot, 1);
		if (iot == 32)
			write(1, &iot, 1);
		if (iot >= 'A' && iot <= 'Z')
		{
			iot = iot - 32;
			write(1, &iot, 1);
		}
		else if (iot >= 'A' && iot <= 'Z')
		{
			iot = iot + 32;
			write(1, &iot, 1);
		}
		
			erieur++;
	}
}
