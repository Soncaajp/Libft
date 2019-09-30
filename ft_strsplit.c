/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 12:39:21 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/03 14:58:58 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			count_words(char const *s, char c)
{
	int i;
	int kol;

	i = 0;
	kol = 0;
	if (s[i] != c && s[i] != '\0')
		kol++;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		while (s[i] == c)
		{
			i++;
			if (s[i] != c && s[i] != '\0')
				kol++;
		}
	}
	return (kol);
}

static char			*word_alloc(char const *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (*s == c)
		s++;
	while (s[i] != c && s[i] != '\0')
		i++;
	word = (char*)malloc(sizeof(char) * (i + 1));
	if (word)
	{
		i = 0;
		while (s[i] != c && s[i] != '\0')
		{
			word[i] = s[i];
			i++;
		}
		word[i] = '\0';
		return (word);
	}
	return (NULL);
}

static void			clean_mem_new(char **new, int i)
{
	while (i)
	{
		free(new[i]);
		new[i] = NULL;
		i--;
	}
	free(new);
}

char				**ft_strsplit(char const *s, char c)
{
	char	**new;
	int		i[2];

	if (!s)
		return (NULL);
	i[0] = -1;
	while (*s == c && *s != '\0')
		s++;
	i[1] = count_words(s, c);
	if (!(new = (char**)malloc(sizeof(char*) * (i[1] + 1))))
		return (NULL);
	while (++i[0] < i[1])
	{
		if (!(new[i[0]] = word_alloc(s, c)))
		{
			clean_mem_new(new, i[0]);
			return (NULL);
		}
		while (*s == c)
			s++;
		s = s + ft_strlen(new[i[0]]) + 1;
	}
	new[i[0]] = 0;
	return (new);
}
