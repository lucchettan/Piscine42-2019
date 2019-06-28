/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 17:33:17 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/10 13:56:24 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int		value;

	value = 1;
	while (*str != '\0')
		if (!(*str >= 'a' && *str <= 'z'))
		{
			value = 0;
			return (value);
		}
		else
			str++;
	return (value);
}
