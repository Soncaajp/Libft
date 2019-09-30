/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 15:38:51 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/02 15:44:44 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s) + 1;
	while (*s != '\0')
		s++;
	if ((char)c == '\0')
		return ((char*)s);
	while (i--)
	{
		if (*s == (char)c)
			return ((char*)s);
		s--;
	}
	return (NULL);
}
