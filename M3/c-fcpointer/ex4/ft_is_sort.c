/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 14:02:08 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/18 14:49:43 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	comp(int a, int b)
{
	return (a - b);
}*/

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	i = 0;
	asc = 1;
	desc = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			asc = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			desc = 0;
		i++;
	}
	return (asc || desc);
}

/*int main(void)
{
	int tab1[4] = {1, 2, 3, 4};
	int tab2[4] = {4, 3, 2, 1};
	int tab3[4] = {3, 1, 4, 2};

	ft_putchar(ft_is_sort(tab1, 4, comp) + '0');
	ft_putchar('\n');
	ft_putchar(ft_is_sort(tab2, 4, comp) + '0');
	ft_putchar('\n');
	ft_putchar(ft_is_sort(tab3, 4, comp) + '0');
	ft_putchar('\n');
	return (0);
}*/
