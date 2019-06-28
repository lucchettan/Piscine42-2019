/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 17:21:28 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/14 16:47:14 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	/* je passe mon int en long pour eviter */
	/* tout bug possib,e avec la derniere valeur */
	long	nbr;

	nbr = nb;
	/* si valer min je l'imprime direct */
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		/* si c'est negatif j'imprime '-' et je repasse en positif */
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nb;
		}
		/* si c'est positif je relance la fonction avec nb/10 */
		if (nbr > 9)
		{
			ft_putnbr(nbr / 10);
		}
		/* j'imprime nbr et son modulo % */
		ft_putchar('0' + nbr % 10);
	}
}
