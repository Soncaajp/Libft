/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 18:27:01 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/02 14:52:30 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *ns1;
	unsigned char *ns2;

	ns1 = (unsigned char*)s1;
	ns2 = (unsigned char*)s2;
	while (*ns1 != '\0' || *ns2 != '\0')
	{
		if (*ns1 != *ns2)
			return (*ns1 - *ns2);
		ns1++;
		ns2++;
	}
	return (0);
}
