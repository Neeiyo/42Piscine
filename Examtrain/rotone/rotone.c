/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrandje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 15:01:52 by lgrandje          #+#    #+#             */
/*   Updated: 2020/10/01 17:20:06 by lgrandje         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int 	i;
	char	temp;

	i = 0;
	if (ac != 2)
		return (0);
	while(av[1][i])
	{
		temp = av[1][i];
		if (temp == 'z' || temp == 'Z')
		{
			write(1, &temp, 1);
			temp = temp - 25;
		}
		else if ((temp > 122 && temp < 127) || (temp < 97 && temp > 90) || (temp < 65 && temp >= 32))
		{
			write(1, &temp, 1);
		}
		else
		{
			temp++;
			write(1, &temp, 1);
		}
		i++;
	}
}
