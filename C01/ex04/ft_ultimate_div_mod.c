/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 00:39:21 by fwong             #+#    #+#             */
/*   Updated: 2022/02/14 02:08:55 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int main(void)
{
	int a = 3;
	int b = 18;
	ft_ultimate_div_mod(&a, &b);
}*/
