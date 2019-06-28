/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 17:55:16 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/11 14:34:32 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int		value;

	value = 1;
	while (*str != '\0')
		if (!(*str > 31 && *str <= 126))
		{
			value = 0;
			return (value);
		}
		else
			str++;
	return (value);
}
