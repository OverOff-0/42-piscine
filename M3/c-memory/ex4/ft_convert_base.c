/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 14:22:03 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/22 19:14:47 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str);
int	base_valid(char *base);
int	base_find(char c, char *base);
int	base_atoi(char *str, char *base);

int	ft_nblen(int nb, int len)
{
	int	count;

	count = (nb <= 0);
	while (nb)
	{
		nb = nb / len;
		count++;
	}
	return (count);
}

char	*base_transfert(int nb, char *base)
{
	int		base_len;
	int		len;
	long	nbr;
	char	*result;

	base_len = ft_strlen(base);
	len = ft_nblen(nb, base_len);
	nbr = nb;
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	result[len] = '\0';
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	if (nb == 0)
		result[0] = base[0];
	while (nbr)
	{
		result[--len] = base [nbr % base_len];
		nbr = nbr / base_len;
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	nb;

	if (!base_valid(base_from) || !base_valid(base_to))
		return (0);
	nb = base_atoi(nbr, base_from);
	return (base_transfert(nb, base_to));
}

/*int	main(void)
{
	char	*result;

	result = ft_convert_base("1010", "0123456789", "0123456789abcdef");
	printf("%s\n", result);
	free(result);
	return (0);
}*/
