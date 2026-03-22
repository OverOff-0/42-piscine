/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 12:35:28 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/22 18:38:46 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (i < size)
	{
		result = result + ft_strlen(strs[i]);
		i++;
	}
	result = result + (size - 1) * ft_strlen(sep);
	return (result);
}

int	*strjoin_partie(void)
{
	int	size;
	int	*result;

	if (size == 0)
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	strjoin_partie();
	result = malloc(sizeof(char) * (ft_total_len(size, strs, sep) + 1));
	if (!result)
		return (0);
	while (i < size)
	{
		while (strs[i][j])
			result[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				result[k++] = sep[j++];
		}
		i++;
	}
	result[k] = '\0';
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	char *tab[] = {"ahahaha", "1223446", "oooooo"};
	char *result;

	result = ft_strjoin(3, tab, " ");
	printf("%s\n", result);
	free(result);
	return (0);
}*/
