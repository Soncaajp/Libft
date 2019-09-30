/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 16:40:10 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/03 15:23:39 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	int kol[2];

	if (*n == '\0')
		return ((char*)h);
	while (*h != '\0' && (kol[1] = (int)len) && len)
	{
		if (*h != *n)
			h++;
		else
		{
			kol[0] = 0;
			while (*h == *n && *h != '\0' && kol[1]--)
			{
				h++;
				n++;
				kol[0]++;
			}
			if (*n == '\0')
				return ((char*)(h - kol[0]));
			n -= kol[0];
			h -= (kol[0] - 1);
		}
		len--;
	}
	return (NULL);
}
