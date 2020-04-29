/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 11:08:19 by youcho            #+#    #+#             */
/*   Updated: 2020/04/27 16:38:50 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *s)
{
	char		*res;
	long long	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	if ((res = (char *)malloc(sizeof(char) * (count + 1))) == 0)
		return (0);
	while (*s != '\0')
	{
		*res = *s;
		res++;
		s++;
	}
	*res = '\0';
	return (res - count);
}
