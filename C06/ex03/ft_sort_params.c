/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrandje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 13:33:21 by lgrandje          #+#    #+#             */
/*   Updated: 2020/09/28 11:01:50 by lgrandje         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		compare(char *s1, char *s2)
{
	int cnt;

	cnt = 0;
	while (s1[cnt] == s2[cnt])
	{
		if (s1[cnt] == '\0')
			return (0);
		cnt++;
	}
	return ((unsigned char)s1[cnt] - (unsigned char)s2[cnt]);
}

void	swap(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	print(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int w;
	int comp;

	w = 1;
	while (w < argc - 1)
	{
		comp = compare(argv[w], argv[w + 1]);
		if (comp > 0)
		{
			swap(&argv[w], &argv[w + 1]);
			w = 0;
		}
		w++;
	}
	print(argc, argv);
}
