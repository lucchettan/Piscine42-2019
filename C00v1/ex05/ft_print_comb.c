/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:31:41 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/14 09:58:11 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*fonction d'impression des characteres passes en params */
void	ft_putchar(char u, char d, char c)
{
	/*tant que les trois parametres sont differents*/
	if (c != d && d != u && c != u)
	{	
		/*tant que centaine > dizaine > unite*/
				/*j'imprime cdu*/
		if (c <= d && d <= u)
		{
			write(1, &c, 1);
			write(1, &d, 1);
			write(1, &u, 1);
			/*	tant que cdu != 789 */
			if (!(c == '7' && d == '8' && u == '9'))
			{
				/* j'imprime ' ,' */
				write(1, ", ", 2);
			}
		}
	}
}

void	ft_print_comb(void)
{
	char u;
	char d;
	char c;

	u = '0';
	d = '0';
	c = '0';
	/*tant que centaine < 7 */
	while (c <= '7')
	{
		while (d <= '8')
		{
			/*tant que u <= 9 j'incremente u */
			while (u <= '9')
			{
				/* a chaque cdu je lance une impression */
				ft_putchar(u, d, c);
				u++;
			}
			/*une fois la limite de u atteinte je le */
			/* repasse a 0 et j'incremente d */
			/* et la boucle u recommence repart */
			u = '0';
			d++;
		}
		d = '0';
		c++;
	}
}
