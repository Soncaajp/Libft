/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:49:25 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/01 16:52:17 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*new;

	new = (char*)malloc(sizeof(char) * size);
	if (new)
	{
		ft_bzero(new, size);
		return ((void*)new);
	}
	return (NULL);
}
