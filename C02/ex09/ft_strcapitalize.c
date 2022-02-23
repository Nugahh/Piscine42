/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:13:06 by fwong             #+#    #+#             */
/*   Updated: 2022/02/10 20:08:25 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		if ((str[j] >= 'A' && str[j] <= 'Z'))
			str[j] += 32;
		j++;
	}
	if ((str[0] >= 'a' && str[0] <= 'z'))
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (((str[i] < '0' || str[i] > '9'))
			&& ((str[i] < 'a' || str[i] > 'z'))
			&& ((str[i] < 'A' || str[i] > 'Z')))
		{
			if ((str[i + 1] >= 'a' && str[i + 1] <= 'z'))
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	a[] = "alors JEe 34VEux fa342ire CE pUTIN D+EXO-djsaoi";

	printf("%s", ft_strcapitalize(a));
}*/
