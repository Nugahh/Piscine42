/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 04:29:51 by fwong             #+#    #+#             */
/*   Updated: 2022/02/19 21:47:40 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	neg;

	i = 0;
	nb = 0;
	neg = 1;
	while (ft_is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * neg);
}
/*
int	main()
{
	char a[] = "-1234";
	printf("%d", ft_atoi(a));
	return (0);
}*/
