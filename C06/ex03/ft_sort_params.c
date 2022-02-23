/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 03:19:50 by fwong             #+#    #+#             */
/*   Updated: 2022/02/21 22:12:03 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swaptab(char **tab, int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < size)
	{	
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		ft_swaptab(av, ac);
		while (i < ac)
		{
			ft_putstr(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}
