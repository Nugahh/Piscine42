/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 02:39:45 by fwong             #+#    #+#             */
/*   Updated: 2022/02/21 02:39:48 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	nbr;

	nbr = 2;
	if (nb <= 1)
		return (0);
	while (nbr <= nb / nbr)
	{
		if (nb % nbr == 0)
			return (0);
		nbr++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
