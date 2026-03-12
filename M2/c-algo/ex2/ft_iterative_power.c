/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:25:35 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/10 17:32:55 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	value;

	if (power < 0 || nb < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		value = nb;
		while (power > 1)
		{
			value = value * nb;
			power--;
		}
	}
	return (value);
}

/*int main (void)
{
	printf("%d", ft_iterative_power(4, 3));
	printf("%d", ft_iterative_power(0, 3));
	printf("%d", ft_iterative_power(4, 0));
	printf("%d", ft_iterative_power(-4, -3));
}*/
