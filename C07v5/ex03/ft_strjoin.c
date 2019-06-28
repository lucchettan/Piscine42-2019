/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 17:36:36 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/24 14:44:58 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

char	*ft_strcat(char *dest, char **strs, char *sep, int size)
{
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	while (i < (size - 1))
	{
		while (strs[x][y])
		{
			dest[i] = strs[x][y++];
			i++;
		}
		y = 0;
		x++;
		while (sep[y] && i < (size - 1))
		{
			dest[i] = sep[y++];
			i++;
		}
		y = 0;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		x;
	char	*tab;
	int		compteur;
	int		sizestrs;

	x = 0;
	compteur = 0;
	while (x < size)
	{
		compteur += ft_strlen(strs[x]);
		x++;
	}
	sizestrs = x;
	x = ft_strlen(sep);
	if (size <= 0)
	{
		tab = (char*)malloc(sizeof(*tab) * 1);
		tab[0] = '\0';
		return (tab);
	}
	compteur += (size - 1) * x + 1;
	if (!(tab = (char*)malloc(compteur * sizeof(*tab))))
		return (tab);
	tab = ft_strcat(tab, strs, sep, compteur);
	return (tab);
}
