/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:05:13 by fwong             #+#    #+#             */
/*   Updated: 2022/02/03 15:09:13 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_print_reverse_alphabet(void)
{
	int	z;

	z = 122;
	while (z >= 'a')
	{
		write(1, &z, 1);
		z--;
	}
}
