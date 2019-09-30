/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:30:23 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/03 15:39:30 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (2);
	else
	{
		while (i < nb)
		{
			if (nb % i == 0)
				return (ft_find_next_prime(nb + 1));
			i++;
		}
		return (nb);
	}
}
