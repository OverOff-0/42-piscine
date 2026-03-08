/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 14:50:47 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/08 15:11:19 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	comb(int a,int b)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	
	a = 0;
	while(a <= 98)
	{
		b = a + 1;
		while(b <= 99)
		{
			comb(a, b);
			if (!(a == 98 && b == 99))
				ft_putchar(',');
				ft_putchar(' ');
				b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb2();
}
