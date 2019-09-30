/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 17:44:07 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/01 18:07:47 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	int		i;

	if (s)
	{
		new = (char*)malloc(sizeof(char) * (len + 1));
		if (new)
		{
			i = 0;
			while (i != (int)len)
			{
				new[i] = s[start];
				i++;
				start++;
			}
			new[i] = '\0';
			return (new);
		}
	}
	return (NULL);
}
