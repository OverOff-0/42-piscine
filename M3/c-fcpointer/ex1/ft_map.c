/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 11:13:51 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/18 11:43:14 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = nb;
	if (nbr = -2147483648)
		write(1, "-2147483648", 11);
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nbr);
	}
	else if (nbr < 10)
	{
		ft_putchar(nbr + '0');
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int	double_value(int x)
{
	return (x * 2);
}

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*new;
	int	i;

	new = malloc(sizeof(int) * length);
	if (!new)
		return (0);
	i = 0;
	while (i < length)
	{
		new[i] = f(tab[i]);
		i++;
	}
	return (new);
}

int	main(void)
{
	int tab[3] = {50, 3, 5};
	int i;
	int *result;

	result = ft_map(tab, 3, double_value);

	i = 0;
	while (i < 3)
	{
		ft_putnbr(result[i]);
		ft_putchar('\n');
		i++;
	}
	free(result);
	return(0);
}
