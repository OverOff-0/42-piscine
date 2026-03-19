/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buzzfizz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:40:31 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/19 14:32:15 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

void	fizzbuzz()
{
	int	count;

	count = 1;
	while (count <= 100)
	{
		if (count % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (count % 3 == 0)
			write(1, "fizz", 4);
		else if (count % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(count);
			ft_putchar('\n');
			count++;
	}
}

int	main(void)
{
	fizzbuzz();
}
