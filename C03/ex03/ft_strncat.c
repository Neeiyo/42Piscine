/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrandje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 19:59:42 by lgrandje          #+#    #+#             */
/*   Updated: 2020/09/18 08:58:51 by lgrandje         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		size(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int y;

	i = 0;
	y = 0;
	if (nb == 0)
		return (0);
	while (dest[i] <= '\0')
		i++;
	while (src[y] <= '\0' && y < nb)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}
