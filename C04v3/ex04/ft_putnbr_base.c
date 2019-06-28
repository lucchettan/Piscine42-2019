/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 11:42:59 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/18 11:15:34 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int		check(char *base)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		nbrfinal[100];
	int		i;

	i = 0;
	if (check(base))
	{
		if (nbr < ft_strlen(base))
		{
			ft_putchar(base[nbr]);
			return ;
		}
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (nbr)
		{
			nbrfinal[i] = nbr % ft_strlen(base);
			nbr = nbr / ft_strlen(base);
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[nbrfinal[i]]);
	}
}
