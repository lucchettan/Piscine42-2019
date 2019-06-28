/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 16:50:26 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/26 13:30:40 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*tab;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		if (!(tab = (int*)malloc(sizeof(*tab) * (max - min))))
			return (-1);
		while (min < max)
		{
			tab[i] = min;
			i++;
			min++;
		}
		*range = tab;
		return (i);
	}
}
