/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 13:31:20 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/17 11:11:41 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int     main(void)
{
        char stra[] = "ajajaja";
        char strb[] = "A5d5HAHAH";

        printf("%s\n", ft_strupcase(stra));
        printf("%s\n", ft_strupcase(strb));
}*/
