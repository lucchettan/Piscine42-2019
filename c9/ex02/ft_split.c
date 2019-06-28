/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 12:36:20 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/26 12:09:08 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_words(char *str)
{
	int		count;

	count = 0;
	while (*str)
	{
		while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
			str++;
		if (*str && *str != ' ' && *str != '\n' && *str != '\t')
		{
			count++;
			while (*str && *str != ' ' && *str != '\n' && *str != '\t')
				str++;
		}
	}
	return (count);
}

char	*malloc_word(char *str, char *charset)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		i++;
	word = (char *)malloc(sizeof(char) * (i + 3));
	i = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
	{
		if (x == 0)
			word[i] = charset[0];
		else
		{
			word[i + 1] = str[i];
			i++;
		}
	}
	word[i + 1] = charset[1];
	i++;
	word[i + 1] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	char	**tab;
	int		i;

	words = count_words(str);
	tab = (char **)malloc(sizeof(char*) * (words + 1));
	i = 0;
	while (*str)
	{
		while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
			str++;
		if (*str && *str != ' ' && *str != '\n' && *str != '\t' && *charset)
		{
			tab[i] = malloc_word(str, charset);
			i++;
			charset += 2;
			while (*str && *str != ' ' && *str != '\n' && *str != '\t')
				str++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
