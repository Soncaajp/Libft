/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 14:57:20 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/03 15:08:57 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *res;

	if (lst && f)
	{
		new = (*f)(lst);
		if (new)
		{
			res = new;
			while (lst->next)
			{
				lst = lst->next;
				new->next = (*f)(lst);
				if (!(new->next))
					return (NULL);
				else
					new = new->next;
			}
			return (res);
		}
	}
	return (NULL);
}
