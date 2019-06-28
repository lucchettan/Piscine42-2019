/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 10:42:49 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/12 13:38:18 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(const char *str)
{
	unsigned int	size;

	size = 0;
	while (str[size])
	{
		size++;
	}
	return (size);
}

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(src);
	while (size > 1 && *src)
	{
		*dst++ = *src++;
		size--;
	}
	if (size >= 1)
		*dst = '\0';
	return (len);
}
