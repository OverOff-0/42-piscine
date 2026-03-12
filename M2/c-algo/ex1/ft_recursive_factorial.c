/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 14:08:57 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/10 17:30:46 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	value;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
	{
		value = nb;
		value = value * ft_recursive_factorial(nb - 1);
	}
	return (value);
}

/*int main(void)
{
        printf("%d", ft_recursive_factorial(3));
        return (0);
}*/
