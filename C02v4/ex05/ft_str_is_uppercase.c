/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 17:48:48 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/10 13:57:03 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int		value;

	value = 1;
	while (*str != '\0')
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			value = 0;
			return (value);
		}
		else
			str++;
	return (value);
}
