/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 09:21:51 by youcho            #+#    #+#             */
/*   Updated: 2020/03/01 19:10:04 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size_d)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] && i < size_d)
		i++;
	while (src[j] && i + j + 1 < size_d)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != size_d)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
