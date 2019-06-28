/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldemesla <ldemesla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 13:15:24 by ldemesla          #+#    #+#             */
/*   Updated: 2019/06/19 09:27:00 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	verif_rules_colup(int index, char **tab)
{
	int		j;
	char	view_nbr;
	char	temp;

	temp = '0';
	j = 0;
	view_nbr = '0';
	while (j < 4)
	{
		if (temp < tab[j][index])
		{
			temp = tab[j][index];
			view_nbr++;
		}
		j++;
	}
	return (view_nbr);
}

char	verif_rules_coldown(int index, char **tab)
{
	int		j;
	char	view_nbr;
	char	temp;

	temp = '0';
	j = 3;
	view_nbr = '0';
	while (j >= 0)
	{
		if (temp < tab[j][index])
		{
			temp = tab[j][index];
			view_nbr++;
		}
		j--;
	}
	return (view_nbr);
}

char	verif_rules_rowleft(int index, char **tab)
{
	int		j;
	char	view_nbr;
	char	temp;

	temp = '0';
	j = 0;
	view_nbr = '0';
	while (j < 4)
	{
		if (temp < tab[index][j])
		{
			temp = tab[index][j];
			view_nbr++;
		}
		j++;
	}
	return (view_nbr);
}

char	verif_rules_rowright(int index, char **tab)
{
	int		j;
	char	view_nbr;
	char	temp;

	temp = '0';
	j = 3;
	view_nbr = '0';
	while (j >= 0)
	{
		if (temp < tab[index][j])
		{
			temp = tab[index][j];
			view_nbr++;
		}
		j--;
	}
	return (view_nbr);
}

int		verif_rules(char *args, char **tab)
{
	int i;

	i = 0;
	while (i < 4 && args[i] != '\0')
		if (verif_rules_colup(i, tab) != args[i])
			return (0);
		else
			i++;
	while (i < 8 && args[i] != '\0')
		if (verif_rules_coldown(i - 4, tab) != args[i])
			return (0);
		else
			i++;
	while (i < 12 && args[i] != '\0')
		if (verif_rules_rowleft(i - 8, tab) != args[i])
			return (0);
		else
			i++;
	while (i < 16 && args[i] != '\0')
		if (verif_rules_rowright(i - 12, tab) != args[i])
			return (0);
		else
			i++;
	return (1);
}
