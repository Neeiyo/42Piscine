/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrandje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 09:45:26 by lgrandje          #+#    #+#             */
/*   Updated: 2020/09/23 10:14:52 by lgrandje         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (1);
}
