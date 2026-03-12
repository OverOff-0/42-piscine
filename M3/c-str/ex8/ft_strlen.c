/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 15:18:58 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/12 17:06:04 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		i++;
		count++;
	}
	return (count);
}

/*#include <stdio.h>

int     main(void)
{
        char stra[] = "ajajaja";
        char strb[] = "A5d5HAHAH";

        printf("%d\n", ft_strlen(stra));
        printf("%d\n", ft_strlen(strb));
}*/
