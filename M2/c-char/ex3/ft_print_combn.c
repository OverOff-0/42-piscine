/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 16:17:53 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/10 10:02:14 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print(char *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i]);
		i++;
	}
	if (tab[0] != '9' - n + 1)
	{
		write(1, ", ", 2);
	}
}

void	ft_combn(char *tab, int n, int i, char a)
{
	char	c;

	if (i == n)
	{
		ft_print(tab, n);
		return ;
	}
	c = a;
	while (c <= '9')
	{
		tab[i] = c;
		ft_combn(tab, n, i + 1, c + 1);
		c++;
	}
}

void	ft_print_combn(int n)
{
	char	tab[9];

	if (n > 0 && n < 10)
	{
		ft_combn(tab, n, 0, '0');
	}
}

/*int	main(void)
{
	ft_print_combn(3);
	return (0);
}*/
