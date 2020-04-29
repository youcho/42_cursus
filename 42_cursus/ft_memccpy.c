/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:43:53 by youcho            #+#    #+#             */
/*   Updated: 2020/04/26 12:20:50 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*temp_d;
	unsigned char	*temp_s;
	unsigned int	i;

	temp_d = (unsigned char *)dest;
	temp_s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		temp_d[i] = temp_s[i];
		if (temp_s[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
