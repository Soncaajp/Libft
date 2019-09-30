/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 17:51:47 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/01 17:55:41 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new;

	if (s1 && s2)
	{
		new = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (new)
		{
			ft_strcpy(new, s1);
			ft_strcat(new, s2);
			return (new);
		}
	}
	return (NULL);
}
