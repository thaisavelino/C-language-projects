/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 16:40:56 by tavelino          #+#    #+#             */
/*   Updated: 2018/04/27 16:03:14 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *s, const char *to_find, size_t l)
{
	if (!*to_find)
		return ((char *)s);
	while (*s && l-- >= ft_strlen(to_find))
	{
		if (ft_strncmp(to_find, s, (ft_strlen(to_find))) == 0)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
