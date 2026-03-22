/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 13:07:24 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/22 14:52:11 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_nblen(int nb, int len)
{
	int count;

	count = (nb <= 0);
	while (nb)
	{
		nb = nb / len;
		count++;
	}
	return (count);
}

int	base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	base_find(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	base_atoi(char *str, char *base)
{
	int	i;
	int	result;
	int	sign;
	int	value;
	int	len;

	i = 0;
	sign = 1;
	result = 0;
	len = ft_strlen(base);

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}

	value = base_atoi(str[i], base);
	while (value != -1)
	{
		result = result * len + value;
		i++;
		value = base_atoi(str[i], base);
	}
	return (result * sign);
}
