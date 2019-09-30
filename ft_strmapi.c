/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 17:19:24 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/01 17:22:10 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;

	if (s && (*f))
	{
		new = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (new)
		{
			i = 0;
			while (*s != '\0')
			{
				new[i] = (*f)(i, *s);
				i++;
				s++;
			}
			new[i] = '\0';
			return (new);
		}
	}
	return (NULL);
}
