/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 13:36:00 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/21 15:06:12 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int		i;

	i = 0;
	while (*src)
	{
		i++;
		src++;
	}
	return (i);
}

char	*ft_strdup(char *src)
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
