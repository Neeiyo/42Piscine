/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrandje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 17:39:57 by lgrandje          #+#    #+#             */
/*   Updated: 2020/09/18 16:24:13 by lgrandje         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
	int i;
	int m;
	int d;

	i = 0;
	m = 0;
	d = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '-') || (str[i] == '+' ))
	{
		if (str[i] == '-')
			m++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		d = (((d * 10) + str[i]) -  48) ;
		i++;
	}
	if ((m % 2) == 0)
		return (d);
	else
		d = d * (-1);
		return (d);
//	return(m % 2 == 0 ? d : d * -1);
}

int main()
{
	char str[] = "--12";
	printf("%d", ft_atoi(str));
	return(0);
}

