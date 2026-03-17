/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 13:53:06 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/16 14:22:21 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int	test_a(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		if (str[j] == 'a')
			return (1);
		j++;
	}
	return (0);
}*/

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char *str[] = {"hello","hhaa", "42", NULL};
	printf("%d\n", ft_any(str, test_a));
}*/
