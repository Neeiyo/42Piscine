/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrandje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:33:34 by lgrandje          #+#    #+#             */
/*   Updated: 2020/09/30 13:17:27 by lgrandje         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] + 1)
		i++;
	return (i);
}

int		totlen(int size, char **strs, char *sep)
{
	int i;
	int j;
	int tsize;
	int zaehlen;

	i = 0;
	j = 0;
	zaehlen = 0;
	tsize = ft_strlen(sep);
	while (i < size)
	{
		zaehlen = zaehlen + ft_strlen(strs[i]);
		i++;
	}
	tsize = (tsize * size) - tsize;
	j = tsize + zaehlen;
	return (j);
}

char	*ft_strcat(char *dest, char *src)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[k] != '\0')
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		c1;
	char	*tmp;
	int		totalln;

	c1 = 0;
	if (size == 0)
	{
		if (!(tmp = (char *)malloc(sizeof(char) * (1))))
			return (0);
		*tmp = '\0';
		return (tmp);
	}
	totalln = totlen(size, strs, sep);
	if (!(tmp = (char *)malloc(sizeof(char) * (totalln + 1))))
		return (0);
	while (c1 < size)
	{
		tmp = ft_strcat(tmp, strs[c1]);
		if (c1 != size - 1)
			tmp = ft_strcat(tmp, sep);
		c1++;
	}
	return (tmp);
}
