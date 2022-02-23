/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 22:05:25 by fwong             #+#    #+#             */
/*   Updated: 2022/02/16 21:33:25 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i + 1 < n)
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	char a[] = "abcdef";
	char b[] = "abcdef";
	printf("%d", ft_strncmp(a, b, 4));
}*/
