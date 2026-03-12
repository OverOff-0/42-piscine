/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 13:58:46 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/12 14:26:03 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*boite;

	boite = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (boite);
}

/*#include <stdio.h>

int     main(void)
{
        char stra[] = "ajajaja";
        char strb[] = "A5d5HAHAH";

        printf("%s\n", ft_strlowcase(stra));
        printf("%s\n", ft_strlowcase(strb));
}*/
