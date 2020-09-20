/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrandje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 13:19:16 by lgrandje          #+#    #+#             */
/*   Updated: 2020/09/18 12:19:20 by lgrandje         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while ((str[i] == to_find[j]) && to_find[j] != '\0')
		{
			j++;
			i++;
		}
		if (to_find[j] == '\0')
			return (str + (i - j));
		if (j == 0)
			i++;
	}
	return (0);
}
