/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrandje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 17:58:07 by lgrandje          #+#    #+#             */
/*   Updated: 2020/09/27 15:37:35 by lgrandje         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	(void)argc;
	while (argv[0][i])
	{
		i++;
	}
	write(1, (argv[0]), i);
	write(1, "\n", 1);
	return (0);
}
