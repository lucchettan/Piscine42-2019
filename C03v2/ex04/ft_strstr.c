/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 13:48:20 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/14 16:24:33 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		size;

	size = ft_strlen(to_find);
	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		i++;
		while (str[i + j] && str[i + j] == to_find[j])
		{
			if (j == (size - 1))
			{
				return (&str[i]);
			}
			j++;
		}
	}
	return (0);
}
