/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:28:38 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/12 15:42:14 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	rp;

	i = 0;
	rp = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && rp)
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && !rp)
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
			rp = 0;
		else
			rp = 1;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int     main(void)
{
        char stra[] = "bonjour jE mAPPELLE /AAa155aasSD";
        char strb[] = "A5d5HAHAH";

        printf("%s\n", ft_strcapitalize(stra));
        printf("%s\n", ft_strcapitalize(strb));
}*/
