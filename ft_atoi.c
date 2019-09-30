/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <rhulk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 14:28:31 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/03 14:01:18 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check(int negative)
{
	if (negative > 0)
		return (-1);
	return (0);
}

int				ft_atoi(const char *str)
{
	long long	result[2];
	int			negative;

	result[0] = 0;
	result[1] = 0;
	negative = 1;
	while (*str != '\0' && (*str == ' ' || *str == '\t' ||
		*str == '\r' || *str == '\n' || *str == '\v' || *str == '\f'))
		str++;
	if (*str == '-')
	{
		negative = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str != '\0' && ((*str >= '0') && (*str <= '9')))
	{
		result[1] = result[0];
		if (result[1] > (result[0] = (result[0] * 10) + (*str - '0')))
			return (check(negative));
		str++;
	}
	return (result[0] * negative);
}
