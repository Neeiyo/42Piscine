/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrandje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 18:21:36 by lgrandje          #+#    #+#             */
/*   Updated: 2020/09/27 15:37:26 by lgrandje         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	write(1, str, i);
}

int			main(int argc, char **argv)
{
	int i;

	i = 1;
	(void)argc;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
