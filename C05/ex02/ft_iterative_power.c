/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrandje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 10:13:32 by lgrandje          #+#    #+#             */
/*   Updated: 2020/09/23 10:17:22 by lgrandje         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int f;
	int i;

	f = 1;
	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		f = f * nb;
		i++;
	}
	return (f);
}
