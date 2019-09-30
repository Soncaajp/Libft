/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 13:44:37 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/02 15:16:06 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ndst;
	unsigned char	*nsrc;

	ndst = (unsigned char*)dst;
	nsrc = (unsigned char*)src;
	while (n--)
	{
		if (*nsrc == (unsigned char)c)
		{
			*ndst = *nsrc;
			return ((void*)(++ndst));
		}
		else
		{
			*ndst = *nsrc;
			ndst++;
			nsrc++;
		}
	}
	return (NULL);
}
