/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:55:33 by fwong             #+#    #+#             */
/*   Updated: 2022/02/23 01:01:24 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_len(char **strs, int size, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size - 1)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}	
	len = len + ft_strlen(sep) * size - 1;
	return (len);
}

char	*ft_strcat(char *dest, char *src, char *sep, int max)
{
	int	i;
	int	j;
	int	dest_len;

	dest_len = ft_strlen(dest);
	i = 0;
	j = 0;
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	while (sep[j] && dest_len < max - 1)
	{
		dest[dest_len + i] = sep[j];
		i++;
		j++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*str;

	j = ft_len(strs, size, sep);
	str = malloc(sizeof(char) * ft_len(strs, size, sep));
	if (!str)
		return (0);
	i = 0;
	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	while (i < size)
	{
		ft_strcat(str, strs[i], sep, j);
		i++;
	}
	return (str);
}
/*
int	main(int ac, char **av)
{
	printf("%s", ft_strjoin(ac, av, "\\"));
}*/
