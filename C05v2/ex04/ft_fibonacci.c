/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 15:09:48 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/20 11:13:55 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index == 1 || index == 2)
		return (1);
	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
