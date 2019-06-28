/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlucchet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:35:09 by nlucchet          #+#    #+#             */
/*   Updated: 2019/06/09 14:06:48 by nlucchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		interval(int width, int a)
{
	if (width == 0)
		ft_putchar('A');
	if (a == 1)
		ft_putchar('\n');
	else if (width == a - 1)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
	else
		ft_putchar('B');
	width++;
	return (width);
}

int		mid(int width, int a)
{
	if (width == 0)
		ft_putchar('B');
	if (a == 1)
		ft_putchar('\n');
	else if (width == a - 1)
	{
		ft_putchar('B');
		ft_putchar('\n');
	}
	else
		ft_putchar(' ');
	width++;
	return (width);
}

void	rush(int a, int b)
{
	int height;
	int width;

	height = 0;
	width = 0;
	if (a > 0 || b > 0)
		while (height < b)
		{
			if (height == 0 || height == b - 1)
			{
				while (width < a)
					width = interval(width, a);
				width = 0;
			}
			else
			{
				while (width < a)
					width = mid(width, a);
				width = 0;
			}
			height++;
		}
}
