/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:09:44 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/11 19:45:56 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

/*void ft_sort(int *tab, int size)
{
	int i;
	int s;

	i = 0;
	while(i < size / 2)
	{
		s = tab[i];
		tab[i] = tab[size - 1 + i];
		tab[size - 1 + i] = s;
		i++;
	}
}*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	s;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			s = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = s;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

/*int main(void)
{
	int tab[]= {6,5,7,8,9,1,2,3,4};
	int i = 0;

	ft_sort_int_tab(tab, 9);

	while(i < 9)
	{
	printf("%d\n", tab[i]);
	i++;
	}
}*/
