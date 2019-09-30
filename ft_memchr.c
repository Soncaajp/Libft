/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 15:56:23 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/01 18:22:51 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *new;

	new = (unsigned char*)s;
	while (n--)
	{
		if (*new == (unsigned char)c)
			return (new);
		new++;
	}
	return (NULL);
}
