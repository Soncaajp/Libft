/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:12:22 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/01 16:18:06 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;

	i = 0;
	new = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (new)
	{
		while (*s1 != '\0')
		{
			new[i] = *s1;
			i++;
			s1++;
		}
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
