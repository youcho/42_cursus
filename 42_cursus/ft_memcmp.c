/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 21:34:47 by youcho            #+#    #+#             */
/*   Updated: 2020/02/29 10:11:32 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp_1;
	unsigned char	*temp_2;
	unsigned int	i;

	temp_1 = (unsigned char *)s1;
	temp_2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (temp_1[i] != temp_2[i])
			return (temp_1[i] - temp_2[i]);
		i++;
	}
	return (0);
}
