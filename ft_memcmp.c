/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:00:42 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/01 18:33:15 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ns1;
	unsigned char *ns2;

	ns1 = (unsigned char*)s1;
	ns2 = (unsigned char*)s2;
	while (n--)
	{
		if (*ns1 != *ns2)
			return (*ns1 - *ns2);
		ns1++;
		ns2++;
	}
	return (0);
}
