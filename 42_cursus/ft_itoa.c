/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 18:18:50 by youcho            #+#    #+#             */
/*   Updated: 2020/04/27 18:21:22 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	int			count;
	long long	temp;
	char		*res;

	temp = n;
	if ((count = 1) == 1 && temp < 0)
		count++;
	if (temp < 0)
		temp *= -1;
	while ((temp = temp / 10) > 0)
		count++;
	if ((res = (char *)malloc(sizeof(char) * (count + 1))) == 0)
		return (0);
	temp = (long long)n * 10;
	if (temp < 0)
	{
		res[0] = '-';
		temp *= -1;
	}
	res[count--] = '\0';
	if (temp == 0)
		res[count] = '0';
	while ((temp = temp / 10) > 0)
		res[count--] = temp % 10 + '0';
	return (res);
}
