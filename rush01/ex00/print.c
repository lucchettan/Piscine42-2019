/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldemesla <ldemesla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 13:15:10 by ldemesla          #+#    #+#             */
/*   Updated: 2019/06/19 18:11:53 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	**empty_tab(void)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc(4 * sizeof(char*));
	while (i < 4)
	{
		j = 0;
		tab[i] = malloc(4 * sizeof(char));
		while (j < 4)
		{
			tab[i][j] = '0';
			j++;
		}
		i++;
	}
	return (tab);
}

void	error(void)
{
	write(1, "Error", 5);
	write(1, "\n", 1);
}

char	*concatenate(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
			str[count++] = str[i];
		i++;
	}
	str[count] = '\0';
	return (str);
}

void	print_grid(char **board)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			write(1, &board[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}

int		verif_av(char *arg)
{
	int i;

	i = 0;
	while (arg[i] != '\0')
	{
		if (i % 2 == 0 && (arg[i] < '1' || arg[i] > '4'))
			return (0);
		else if (i % 2 == 1 && arg[i] != ' ')
			return (0);
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}
