/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:07:20 by youcho            #+#    #+#             */
/*   Updated: 2020/04/28 09:16:30 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_d;
	unsigned char	*temp_s;
	size_t			i;

	i = 0;
	if (dest == 0 && src == 0)
		return (0);
	temp_d = (unsigned char *)dest;
	temp_s = (unsigned char *)src;
	while (i < n)
	{
		temp_d[i] = temp_s[i];
		i++;
	}
	return (dest);
}
