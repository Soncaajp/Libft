/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <rhulk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:46:45 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/01 15:22:08 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*new;
	int					i;

	new = (unsigned char*)b;
	i = 0;
	while (len--)
	{
		new[i] = c;
		i++;
	}
	return (b);
}
