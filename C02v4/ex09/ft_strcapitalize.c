/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:34:38 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/13 11:22:06 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		ilen;
	int		setlow;

	ilen = 1;
	setlow = 0;
	while (str[setlow] != '\0')
	{
		if (str[setlow] >= 'A' && str[setlow] <= 'Z')
			str[setlow] = str[setlow] + 32;
		setlow++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[ilen] != '\0')
	{
		if ((str[ilen] >= 'a' && str[ilen] <= 'z')
				&& !((str[ilen - 1] >= 'A' && str[ilen - 1] <= 'Z')
					|| (str[ilen - 1] >= 'a' && str[ilen - 1] <= 'z')
					|| (str[ilen - 1] >= '0' && str[ilen - 1] <= '9')))
			str[ilen] = str[ilen] - 32;
		ilen++;
	}
	return (str);
}
