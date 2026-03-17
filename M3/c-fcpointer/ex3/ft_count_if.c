/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 14:22:50 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/16 16:05:43 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	test_b(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'b')
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	j;
	int	count;

	j = 0;
	count = 0;
	while (tab[j] != 0)
	{
		count++;
		j++;
	}
	return (count);
}

#include <stdio.h>

int	main(void)
{
	char *str[] = {"yes bebe"};
	printf("%d\n", ft_count_if(str, 1, test_b));
}
