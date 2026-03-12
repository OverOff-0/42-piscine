/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 11:18:36 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/12 12:02:42 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (!str)
		return (1);
	while (*str)
	{
		if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
			return (0);
		str++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char stra[] = "ajajaja";
	char strb[] = "";

	printf("%d\n", ft_str_is_alpha(stra));
	printf("%d\n", ft_str_is_alpha(strb));
}*/
