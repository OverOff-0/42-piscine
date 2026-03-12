/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 13:27:05 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/12 14:21:57 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	if (!str)
		return (1);
	while (*str)
	{
		if ((*str < 'A' || *str > 'Z'))
			return (0);
		str++;
	}
	return (1);
}

/*#include <stdio.h>

int     main(void)
{
        char stra[] = "ajajaja";
        char strb[] = "AHAHAH";

        printf("%d\n", ft_str_is_uppercase(stra));
        printf("%d\n", ft_str_is_uppercase(strb));
}*/
