/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldemesla <ldemesla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 13:21:43 by ldemesla          #+#    #+#             */
/*   Updated: 2019/06/19 18:11:25 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	error(void);
char	*concatenate(char *str);
void	print_grid(char **tab);
int		verif_av(char *arg);
int		verif_rules(char *args, char **tab);
char	**empty_tab(void);
int		print_tab(char **tab);

int		verif_args(int *arg)
{
	int i;

	i = 0;
	while (i < 12)
	{
		if ((arg[i] == 1 && arg[i + 4] == 1) ||
				(arg[i] == 2 && arg[i + 4] == 4) ||
				(arg[i] == 4 && arg[i + 4] >= 2) ||
				(arg[i] == 3 && arg[i + 4] == 4))
			return (0);
		if (++i == 4)
			i = 8;
	}
	return (1);
}

int		check_twins_row(char **tab, int h)
{
	int i;
	int j;

	i = 0;
	while (i < 3)
	{
		j = i + 1;
		while (j < 4)
		{
			if (tab[h][i] == tab[h][j] && tab[h][i] != '0')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		check_twins_col(char **tab, int l)
{
	int i;
	int j;

	i = 0;
	while (i < 3)
	{
		j = i + 1;
		while (j < 4)
		{
			if (tab[i][l] == tab[j][l] && tab[i][l] != '0')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		fill_grid(char **tab, int h, int l, char *args)
{
	char i;

	i = '0';
	while (i++ < '5')
	{
		tab[h][l] = i;
		if (check_twins_row(tab, h) && check_twins_col(tab, l))
		{
			if ((l == 3) && (h == 3))
			{
				if (verif_rules(args, tab) == 1)
					return (print_tab(tab));
			}
			else if (l == 3)
			{
				if (fill_grid(tab, h + 1, 0, args))
					return (1);
			}
			else if (fill_grid(tab, h, l + 1, args))
				return (1);
		}
	}
	tab[h][l] = '0';
	return (0);
}

int		main(int argc, char **argv)
{
	char	**tab;
	char	*args;
	int		failed;

	if (argc != 2 && verif_av(argv[1]) == 0)
	{
		error();
		return (0);
	}
	args = concatenate(argv[1]);
	tab = empty_tab();
	failed = fill_grid(tab, 0, 0, args);
	if (failed == 0)
		error();
	return (0);
}
