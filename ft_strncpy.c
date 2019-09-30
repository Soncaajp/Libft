/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 14:03:29 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/02 15:28:58 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (i < (int)len && *src != '\0')
	{
		dst[i] = *src;
		i++;
		src++;
	}
	while (i < (int)len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
