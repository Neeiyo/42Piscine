/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrandje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 12:21:38 by lgrandje          #+#    #+#             */
/*   Updated: 2020/09/30 16:35:54 by lgrandje         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int			i;
	long int 	size;

	i = 0;
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	else 
	{
		size = max - min;
		if (!(range[0] =(int*) malloc(sizeof(int) * size)))
			return (0);
	}
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (size);
}
