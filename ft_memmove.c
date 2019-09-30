/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:26:22 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/03 13:30:51 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ndst;
	unsigned char	*nsrc;

	ndst = (unsigned char*)dst;
	nsrc = (unsigned char*)src;
	if (nsrc < ndst)
	{
		while (len--)
			*(ndst + len) = *(nsrc + len);
	}
	else
		ft_memcpy(ndst, nsrc, len);
	return ((void*)ndst);
}
