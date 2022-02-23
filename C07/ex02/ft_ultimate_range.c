/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:10:25 by fwong             #+#    #+#             */
/*   Updated: 2022/02/23 01:02:34 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
		return (0);
	*range = malloc(sizeof(int) * (max - min));
	if (!*range)
		return (0);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}
