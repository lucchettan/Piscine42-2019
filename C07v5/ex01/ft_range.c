/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 11:39:46 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/26 09:25:56 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		size;
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
	{
		tab = 0;
		return (tab);
	}
	else
	{
		size = max - min;
		if (!(tab = (int*)malloc(sizeof(*tab) * size)))
			return (0);
		while (min < max)
		{
			tab[i] = min;
			i++;
			min++;
		}
		return (tab);
	}
}
