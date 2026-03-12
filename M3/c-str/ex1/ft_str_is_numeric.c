/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 12:29:59 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/12 14:18:54 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (!str)
		return (1);
	while (*str)
	{
		if ((*str < '0' || *str > '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*#include <stdio.h>

int     main(void)
{
        char stra[] = "ajajaja";
        char strb[] = "55554";

        printf("%d\n", ft_str_is_numeric(stra));
        printf("%d\n", ft_str_is_numeric(strb));
}*/
