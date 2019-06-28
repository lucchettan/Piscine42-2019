/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 18:19:54 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/19 09:04:12 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

char	**ft_sort_tab(char **tab, int size)
{
	char	*i;
	int		comp;
	int		is_it_sorted;

	is_it_sorted = 0;
	comp = 0;
	while (is_it_sorted == 0)
	{
		is_it_sorted = 1;
		while (comp < size - 1)
		{
			i = tab[comp];
			if (ft_strcmp(tab[comp], tab[comp + 1]) > 0)
			{
				is_it_sorted = 0;
				tab[comp] = tab[comp + 1];
				tab[comp + 1] = i;
			}
			comp++;
		}
		comp = 0;
	}
	return (tab);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (ft_sort_tab(argv, argc)[i])
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
