/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:28:50 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/03 15:36:32 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (0);
	else
	{
		while (i < nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	}
	return (1);
}
