/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrandje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 10:16:29 by lgrandje          #+#    #+#             */
/*   Updated: 2020/09/17 19:30:17 by lgrandje         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				size_src;

	size_src = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (size_src);
	while ((src[i] != '\0') && (i < (size - 1)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (size_src);
}
