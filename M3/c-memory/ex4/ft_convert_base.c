/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 14:22:03 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/22 14:52:08 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     ft_strlen(char *str);
int     ft_nblen(int nb, int len);
int     base_valid(char *base);
int     base_find(char c, char *base);
int     base_atoi(char *str, char *base);

char	*base_tranfert(int nb, char *base)
{
	int	base_len;
	int	len;
	long	c;
	char	*result;

	base_len = ft_strlen(base);
	len = ft_nblen(nb, len);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	result[len] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		result[0] = base[0];
	while (nb)
	{
		result[len] = base [nb % base_len];
		len++;
		nb = nb / base_len;
	}
	return (result);
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	n;

	if (!base_valid(base_from) || !base_valid(base_to))
		return (0);
	n = base_atoi(nb, base_from);
	return (base_transfert(nb, base_to));
}

int	main(void)
{
	int	*result;

	result = ft_convert_base("42", "0123456789", "0123456789abcdef");
	printf("%s\n", result);
	free(result);

	return (0);
}

