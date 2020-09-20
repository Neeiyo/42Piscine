/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrandje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 10:45:03 by lgrandje          #+#    #+#             */
/*   Updated: 2020/09/17 10:45:20 by lgrandje         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!((str[a] >= 'a' && str[a] <= 'z')
			|| (str[a] >= 'A' && str[a] <= 'Z')))
			return (0);
		a++;
	}
	return (1);
}