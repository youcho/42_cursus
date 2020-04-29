/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 09:08:54 by youcho            #+#    #+#             */
/*   Updated: 2020/04/27 16:57:46 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t				ft_strlcpy(char *dest, const char *src, size_t size_d)
{
	unsigned int	i;
	unsigned int	j;

	if (src == 0 || dest == 0)
		return (0);
	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		if (i + 1 < size_d)
		{
			dest[i] = src[i];
			j = i;
		}
		i++;
	}
	if (size_d == 0)
		return (i);
	if (i == 0)
		dest[0] = '\0';
	else if (size_d == 1)
		dest[0] = '\0';
	else
		dest[j + 1] = '\0';
	return (i);
}
