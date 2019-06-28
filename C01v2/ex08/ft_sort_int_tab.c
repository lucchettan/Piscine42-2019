/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 13:58:56 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/26 14:03:10 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		size_comp;
	int		is_it_sorted;

	is_it_sorted = 0;
	size_comp = 0;
	while (is_it_sorted == 0)
	{
		is_it_sorted = 1;
		while (size_comp < size - 1)
		{
			i = tab[size_comp];
			if (tab[size_comp] > tab[size_comp + 1])
			{
				is_it_sorted = 0;
				tab[size_comp] = tab[size_comp + 1];
				tab[size_comp + 1] = i;
			}
			size_comp++;
		}
		size_comp = 0;
	}
}

