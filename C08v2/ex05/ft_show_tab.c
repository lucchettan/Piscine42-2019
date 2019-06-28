/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 10:05:44 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/27 08:11:58 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	long nbr;

	nbr = nb;
	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nb;
		}
		if (nbr > 9)
			ft_putnbr(nbr / 10);
		ft_putchar('0' + nbr % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		x;

	x = 0;
	while (par[x].str != 0)
	{
		ft_putstr(par[x].str);
		ft_putstr("\n");
		ft_putnbr(par[x].size);
		ft_putstr("\n");
		ft_putstr(par[x].copy);
		ft_putstr("\n");
		x++;
	}
}
