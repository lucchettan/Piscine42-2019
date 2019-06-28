/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 08:44:56 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/26 15:35:44 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int				ft_strlen(char *str)
{
	int		x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

int				ft_biglen(char **str)
{
	int		x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

char			*ft_strdup(char *src)
{
	int		i;
	char	*tab;

	i = 0;
	if (!(tab = (char*)malloc((ft_strlen(src) + 1) * sizeof(*tab))))
		return (0);
	while (i < ft_strlen(src))
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

t_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int				x;
	t_stock_str		*rslt;

	x = 0;
	if (!(rslt = (t_stock_str*)malloc(sizeof(*rslt) * (ac + 1))))
		return (rslt = NULL);
	while (x < ac)
	{
		rslt[x].size = ft_strlen(av[x]);
		rslt[x].str = av[x];
		rslt[x].copy = ft_strdup(rslt[x].str);
		x++;
	}
	rslt[x].str = 0;
	return (rslt);
}
