/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 19:16:43 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/22 19:48:08 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	separa(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	word_count(char *str, char *sep)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		while (str[i] && separa(str[i], sep))
			i++;
		if (str[i])
		{
			nb++;
			while (str[i] && !separa(str[i], sep))
			{
				i++;
			}
		}
	}
	return (nb);
}

char	*duplica(char *str, int min, int max)
{
	char	*mot;
	int		i;

	i = 0;
	mot = malloc(sizeof(char) * (max - min + 1));
	if (!mot)
		return (0);
	while (min < max)
	{
		mot[i++] = str[min++];
	}
	mot[i] = '\0';
	return (mot);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		s;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (word_count(str, charset) + 1));
	if (!tab)
		return (0);
	while (str[i])
	{
		while (str[i] && separa(str[i], charset))
			i++;
		s = i;
		while (str[i] && !separa(str[i], charset))
			i++;
		if (i > s)
			tab[j++] = duplica(str, s, i);
	}
	tab[j] = 0;
	return (tab);
}

/*#include <stdio.h>

int	main(void)
{
	char	**tab;
	int		i;

	i = 0;
	tab = ft_split("enleve,,moi,,ca", ",;,,");
	if (!tab)
		return (1);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
