/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 14:12:28 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/02 16:47:28 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *h, const char *n)
{
	int kol;

	if (*n == '\0')
		return ((char*)h);
	while (*h != '\0')
	{
		if (*h != *n)
			h++;
		else
		{
			kol = 0;
			while (*h == *n && *h != '\0')
			{
				h++;
				n++;
				kol++;
			}
			if (*n == '\0')
				return ((char*)(h - kol));
			n -= kol;
			h -= (kol - 1);
		}
	}
	return (NULL);
}
