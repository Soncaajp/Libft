/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 12:16:27 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/03 13:16:47 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

char			*ft_itoa(int n)
{
	int		kol;
	int		last_n;
	char	*new;

	kol = 0;
	if (n <= 0)
		kol = 1;
	last_n = n;
	while (last_n && ++kol)
		last_n /= 10;
	if (!(new = (char*)malloc(sizeof(char) * (kol + 1))))
		return (NULL);
	new[kol] = '\0';
	*new = '0';
	last_n = n;
	while (last_n)
	{
		new[--kol] = (((last_n % 10) * check(n)) + '0');
		last_n /= 10;
	}
	if (n < 0)
		*new = '-';
	return (new);
}
