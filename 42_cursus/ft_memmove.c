/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 20:09:14 by youcho            #+#    #+#             */
/*   Updated: 2020/04/27 16:31:32 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			*ft_rev_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_d;
	unsigned char	*temp_s;
	size_t			i;

	if (n == 0)
		return (dest);
	i = n - 1;
	temp_d = (unsigned char *)dest;
	temp_s = (unsigned char *)src;
	while (1)
	{
		temp_d[i] = temp_s[i];
		if (i != 0)
			i--;
		else
			break ;
	}
	return (dest);
}

void				*ft_memmove(void *dest, const void *src, size_t n)
{
	if ((long long)dest == (long long)src)
		return (dest);
	else if ((long long)dest < (long long)src)
		ft_memcpy(dest, src, n);
	else
		ft_rev_memcpy(dest, src, n);
	return (dest);
}
