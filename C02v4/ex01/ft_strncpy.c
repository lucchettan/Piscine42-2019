/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 15:03:45 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/18 18:45:38 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int ilen;

	ilen = 0;
	while (src[ilen] && ilen < n)
	{
		dest[ilen] = src[ilen];
		ilen++;
	}
	while (ilen < n)
	{
		dest[ilen] = '\0';
		ilen++;
	}
	return (dest);
}
