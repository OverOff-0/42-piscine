/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 13:29:06 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/12 14:23:28 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (!str)
		return (1);
	while (*str)
	{
		if ((*str < ' ' || *str > '~'))
			return (0);
		str++;
	}
	return (1);
}

/*#include <stdio.h>

int     main(void)
{
        char stra[] = "";
        char strb[] = "AHAHAH";

        printf("%d\n", ft_str_is_printable(stra));
        printf("%d\n", ft_str_is_printable(strb));
}*/
