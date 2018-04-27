/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplilt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 21:10:24 by tavelino          #+#    #+#             */
/*   Updated: 2018/04/27 16:48:56 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_is_word(const char *s, char c)
{
	int		size;
	int		is_word;

	is_word = 0;
	size = 0;
	while (*s != '\0')
	{
		if (is_word == 1 && *s == c)
			is_word = 0;
		if (is_word == 0 && *s != c)
		{
			is_word = 1;
			size++;
		}
		s++;
	}
	return (size);
}

static int		ft_wordlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**array_str;
	int		word_size;
	int		index;

	index = 0;
	word_size = ft_is_word(s, c);
	array_str = (char **)malloc(sizeof(*array_str) * (word_size + 1));
	if (array_str == NULL)
		return (NULL);
	while (word_size--)
	{
		while (*s == c && *s != '\0')
			s++;
		array_str[index] = ft_strsub(s, 0, ft_wordlen(s, c));
		if (array_str[index] == NULL)
			return (NULL);
		s = s + ft_wordlen(s, c);
		index++;
	}
	array_str[index] = NULL;
	return (array_str);
}
