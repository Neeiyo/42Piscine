/* ************************************************************************** */
/*																			  */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrandje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 09:45:55 by lgrandje          #+#    #+#             */
/*   Updated: 2020/09/30 13:36:29 by lgrandje         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	y;
	int				*tab;
	unsigned int	u;

	u = max - min;
	y = 0;
	if (min >= max)
		return (0);
	if (!(tab =(int*)malloc(sizeof(int) * u)))
		return (0);
	while (min < max)
	{
		tab[y] = min;
		y++;
		min++;
	}
	return (tab);
}

int main()
{
	int mn;
	int mx;
	int* range;
	unsigned  int i;

	i = 0;
	mn = -2147483648;
	mx = 2147483647;
	range = ft_range(mn, mx);
	while(mn < mx)
	{
		printf("%d\n", range[i]);
		i++;
		mn++;
	}
	return(0);
}
