/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 10:32:35 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/08 14:50:05 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	
	while(a <= 7)
	{
		b = a + 1;
		while( b <= 8)
		{
			c = b + 1;
			while(c <= 9)
			{
				ft_putchar(a + '0');
				ft_putchar(b + '0');
				ft_putchar(c + '0');
				if (!(a == 7 && b == 8 && c == 9))
					write(1, ", ", 2);
			c++;
			}
		b++;
		}
	a++;
	}
}
		
/*int main()
{
	ft_print_comb();
	return (0);
}*/
