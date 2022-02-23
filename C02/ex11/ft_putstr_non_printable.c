/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 00:03:11 by fwong             #+#    #+#             */
/*   Updated: 2022/02/12 21:16:53 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_basehex(char nb)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex[(unsigned char)nb / 16], 1);
	write(1, &hex[(unsigned char)nb % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
			ft_basehex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
/*
int	main()
{
	char a[] = "wefin\fdoin\t\naspok";

	ft_putstr_non_printable(a);
}*/
