/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 10:07:31 by youcho            #+#    #+#             */
/*   Updated: 2020/04/27 17:22:13 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*c_s1;
	unsigned char	*c_s2;

	c_s1 = (unsigned char*)s1;
	c_s2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (c_s1[i] != '\0' && c_s2[i] != '\0' && i < n)
	{
		if (c_s1[i] != c_s2[i])
			return (c_s1[i] - c_s2[i]);
		i++;
	}
	if (i == n)
		i--;
	return (c_s1[i] - c_s2[i]);
}
