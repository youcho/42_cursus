/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 17:54:45 by youcho            #+#    #+#             */
/*   Updated: 2020/04/27 18:17:12 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			is_include(char const *s2, const char c)
{
	int				i;

	i = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char				*ft_strtrim(char const *s1, char const *s2)
{
	int				i;
	int				size;
	char			*res;

	if (s1 == 0 || s2 == 0)
		return (0);
	size = ft_strlen(s1) - 1;
	i = 0;
	while (size >= 0 && is_include(s2, s1[size]))
		size--;
	while (i < size && is_include(s2, s1[i]))
		i++;
	if ((res = (char *)malloc(sizeof(char) * (size - i + 2))) == 0)
		return (0);
	ft_strlcpy(res, &s1[i], size - i + 2);
	return (res);
}
