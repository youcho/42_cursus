/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 09:45:09 by youcho            #+#    #+#             */
/*   Updated: 2020/04/26 12:17:33 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	char			*str;
	char			*to_find;
	unsigned int	i;
	unsigned int	s2_len;

	if (*s2 == '\0')
		return ((char *)s1);
	s2_len = ft_strlen(s2);
	i = 0;
	while (i + s2_len <= len)
	{
		str = (char *)s1 + i;
		to_find = (char *)s2;
		while (*str == *to_find && *to_find != '\0')
		{
			str++;
			to_find++;
		}
		if (*to_find == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (0);
}
