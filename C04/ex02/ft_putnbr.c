/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 04:24:56 by fwong             #+#    #+#             */
/*   Updated: 2022/02/21 16:59:25 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	a;

	a = nb;
	if (a < 0)
	{
		ft_putchar('-');
		a *= -1;
	}
	if (a >= 0 && a <= 9)
		ft_putchar('0' + a);
	else
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
}
/*
int	main()
{
	ft_putnbr(1234);
}*/
