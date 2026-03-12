/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 09:02:37 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/10 14:48:38 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = nb;
	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	else if (nbr < 0)
        {
                ft_putchar('-');
                ft_putnbr(nbr = -nbr);
        }
	else if (nbr < 10)
		ft_putchar(nbr + '0');
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int	main()
{
	ft_putnbr(200);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
}

