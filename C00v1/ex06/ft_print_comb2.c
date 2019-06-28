/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:42:18 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/14 10:02:23 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int premier, int deuxieme)
{
	char a;
	char b;
	char c;
	char d;
/*avec chaque int recupere je recupere*/
	/* la dinzaine */
	a = '0' + premier / 10;
	/* l'unite */
	b = '0' + premier % 10;
	/* la dizaine */
	c = '0' + deuxieme / 10;
	/* l'unite */
	d = '0' + deuxieme % 10;
	/*si p < d  j'imprime mes 4chiffresrecuperes de mes 2 int*/
	if (premier < deuxieme)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (!(premier == 98 && deuxieme == 99))
		{
			/* tant que ce n'est pas la derniere valeur que je cherche */
			/* j'imprime ma virgule */
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb2(void)
{
	int premier;
	int deuxieme;

	premier = 00;
	deuxieme = 00;
	/* tant que p < 100 */
	while (premier <= 99)
	{
		/* tant que d < 100 */
		while (deuxieme <= 99)
		{
			/*je lance une impression et j'incremente d */
			ft_putchar(premier, deuxieme);
			deuxieme++;
		}
		/*je reset d a 00 et incremente + */
		deuxieme = 00;
		premier++;
	}
}
