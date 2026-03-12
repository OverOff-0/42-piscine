/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 13:31:20 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/12 14:24:22 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*boite;

	boite = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (boite);
}

/*#include <stdio.h>

int     main(void)
{
        char stra[] = "ajajaja";
        char strb[] = "A5d5HAHAH";

        printf("%s\n", ft_strupcase(stra));
        printf("%s\n", ft_strupcase(strb));
}*/
