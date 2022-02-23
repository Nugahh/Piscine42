/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:35:47 by fwong             #+#    #+#             */
/*   Updated: 2022/02/21 16:51:39 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_is_whitespace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j]
				|| base[i] == '+'
				|| base[i] == '-'
				|| base[i] < 32
				|| base[i] == 127)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_in_base(char nb, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == nb)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	neg;

	i = 0;
	nb = 0;
	neg = 1;
	if (ft_check_base(base) == 0)
		return (0);
	while (ft_is_whitespace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] && (ft_in_base(str[i], base) != -1))
	{
		nb = nb * ft_strlen(base) + ft_in_base(str[i], base);
		i++;
	}
	return (nb *= neg);
}
/*
int	main()
{
	char a[] = "--++-a";
	char base[] = "0a123456789";

	printf("%d", ft_atoi_base(a, base));
}*/
