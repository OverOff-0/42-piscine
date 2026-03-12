/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 12:29:42 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/10 17:31:14 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	value;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
	{
		value = 1;
		while (nb > 1)
		{
			value = value * nb;
			nb--;
		}
	}
	return (value);
}

/*int main(void)
{
	printf("%d", ft_iterative_factorial(4));
	return (0);
}*/
