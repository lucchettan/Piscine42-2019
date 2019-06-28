/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 15:05:44 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/08 16:21:33 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int debut;
	int a;

	debut = 0;
	size--;
	while (debut < size)
	{
		a = tab[debut];
		tab[debut] = tab[size];
		tab[size] = a;
		debut++;
		size--;
	}
}
