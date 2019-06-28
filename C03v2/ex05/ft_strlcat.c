/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:19:15 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/13 14:24:18 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_strlen(char *str)
{
	unsigned int		size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	j = 0;
	if (size > i)
	{
		while (src[j] && (i + j) < (size - 1))
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
	}
	if (size < ft_strlen(dest))
		return (size + ft_strlen(src));
	else
		return (ft_strlen(dest) + ft_strlen(src));
}
