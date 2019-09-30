/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 17:14:32 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/01 17:18:33 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
				new[i] = (*f)(*s);
				s++;
				i++;
			}
			new[i] = '\0';
			return (new);
		}
	}
	return (NULL);
}
