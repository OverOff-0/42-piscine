/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buzzfizz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheddad <mcheddad@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:40:31 by mcheddad          #+#    #+#             */
/*   Updated: 2026/03/19 13:45:08 by mcheddad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fizzbuzz()
{
	int	count;

	if (count % 15)
		write(1, "fizzbuzz", 8);
	else if (count % 3)
		write(1, "fizz", 4);
	else if (count % 5)
		write(1, "buzz", 4);
	else
		count++;
	return (count);
}
