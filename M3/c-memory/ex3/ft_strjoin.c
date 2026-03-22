/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 12:35:28 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/22 16:34:50 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int i =0;
	int result = 0;

	while (i < size)
	{
		result = result + ft_strlen(strs[i]);
		i++;
	}
	result = result + (size - 1) * ft_strlen(sep);
	return (result);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char 		*result;
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	
	if (size == 0)
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}

	result = malloc(sizeof(char) * (ft_total_len(size, strs, sep) + 1));
	if (!result)
		return (0);
	while (i < size)
	{
		while (strs[i][j])
		{
			result[k] == strs[i][j];
			k++;
			j++;
		}

		if (i< size - 1)
		{
			while (sep[j])
			{
				result[k] = sep[j];
				k++;
				j++;
			}
			i++;
		}
		result[k] = '\0';
		return (result);
	}
}

#include <stdio.h>

int	main(void)
{
	char *tab[] = {"ahahaha", "1223446", "oooooo"};
	char *result;

	result = ft_strjoin(3, tab, " ");
	printf("%s\n", result);
	free(result);
	return (0);
}
