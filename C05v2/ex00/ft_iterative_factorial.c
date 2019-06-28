/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 14:24:18 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/20 16:13:12 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		value;

	value = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		value = value * nb;
		nb--;
	}
	return (value);
}
