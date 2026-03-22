/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 11:52:59 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/22 19:15:48 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

/*#include <stdio.h>

int	main(void)
{
	int	*tab;
	int	i;
	int	min;
	int	max;

	i = 0;
	min = 5;
	max = 59;
	tab = ft_range(min, max);
	if (!tab)
		return (0);
	while (i < (max - min))
	{
		printf("%d ", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
