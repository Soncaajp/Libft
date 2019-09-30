/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <rhulk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 17:56:22 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/03 14:08:52 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int start;
	int finish;

	if (s)
	{
		start = 0;
		finish = ft_strlen(s) - 1;
		while ((s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
				&& (s[start] != '\0'))
			start++;
		if (start == (int)ft_strlen(s))
			return (ft_strnew(0));
		while ((s[finish] == ' ' || s[finish] == '\n' || s[finish] == '\t')
				&& (s[finish] != '\0'))
			finish--;
		return (ft_strsub(s, start, finish - start + 1));
	}
	return (NULL);
}
