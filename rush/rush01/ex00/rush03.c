/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 14:27:40 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/08 14:05:54 by wto              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_error(void)
{
	write(1, "INT Error, Try Again. :)\n", 26);
}

void	rush(int x, int y, int col, int lig)
{
	if (x >= 2147483648 || x < 1 || y >= 2147483648 || y < 1)
	{
		ft_error();
		return ;
	}
	lig = 1;
	while (lig <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((col == 1 && lig == 1) || (col == 1 && lig == y))
				ft_putchar('A');
			else if ((col == x && lig == 1) || (col == x && lig == y))
				ft_putchar('C');
			else if (col == x || col == 1 || lig == y || lig == 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		lig++;
	}
}
