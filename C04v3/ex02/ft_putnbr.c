/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:39:20 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/12 17:52:12 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	long	nbr;

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
		{
			ft_putnbr(nbr / 10);
		}
		ft_putchar('0' + nbr % 10);
	}
}
