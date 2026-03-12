/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:25:35 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/11 12:10:20 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	value;

	if (power < 0)
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
	printf("%d\n", ft_iterative_power(-1, 6));
	printf("%d\n", ft_iterative_power(-6, 3));
	printf("%d\n", ft_iterative_power(-4, 5));
	printf("%d\n", ft_iterative_power(0, 0));
}*/
