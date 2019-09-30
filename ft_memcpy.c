/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 13:40:35 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/02 15:56:45 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ndst;
	unsigned char	*nsrc;
	int				i;

	i = 0;
	ndst = (unsigned char*)dst;
	nsrc = (unsigned char*)src;
	while (n--)
	{
		ndst[i] = *nsrc;
		i++;
		nsrc++;
	}
	return ((void*)ndst);
}
