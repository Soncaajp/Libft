/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:39:24 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/03 14:50:04 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t i;
	size_t dst_len;

	dst_len = 0;
	i = ft_strlen(dst);
	if (n > 0)
	{
		while ((i + dst_len < n - 1) && src[dst_len])
		{
			dst[i + dst_len] = src[dst_len];
			dst_len++;
		}
	}
	dst[i + dst_len] = '\0';
	if (n < i + dst_len)
		return (n + ft_strlen(src));
	return (i + ft_strlen(src));
}
