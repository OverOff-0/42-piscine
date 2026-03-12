/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 12:34:21 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/12 14:20:36 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (!str)
		return (1);
	while (*str)
	{
		if ((*str < 'a' || *str > 'z'))
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

        printf("%d\n", ft_str_is_lowercase(stra));
        printf("%d\n", ft_str_is_lowercase(strb));
}*/
