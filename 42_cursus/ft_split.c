/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youcho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 18:07:04 by youcho            #+#    #+#             */
/*   Updated: 2020/04/27 18:53:04 by youcho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		split_freer(char **ptr, int size)
{
	int			i;

	i = 0;
	while (i < size)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

static char		**split_allocator(char const *s, char c)
{
	char		**res;
	int			flag;
	int			i;
	int			j;

	i = 0;
	j = 0;
	flag = 0;
	while (s[i] != '\0')
	{
		if (flag && s[i] == c)
		{
			flag = 0;
			j++;
		}
		else if (s[i] != c)
			flag = 1;
		i++;
	}
	if (s[i - 1] != c)
		j++;
	if ((res = (char**)malloc(sizeof(char *) * (j + 1))) == 0)
		return (0);
	return (res);
}

static int		word_size_getter(char const *s, char c)
{
	int			count;
	int			flag;
	int			i;

	flag = 0;
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			flag = 1;
		}
		else if (s[i] == c && flag == 1)
			break ;
		i++;
	}
	return (count);
}

static char		*word_saver(char const *s, char c, int size, int *i)
{
	char		*res;
	int			count;
	int			flag;

	flag = 0;
	count = 0;
	if ((res = (char *)malloc(sizeof(char) * (size + 1))) == 0)
		return (0);
	while (s[*i] != '\0')
	{
		if (s[*i] != c)
		{
			res[count++] = s[*i];
			flag = 1;
		}
		else if (s[*i] == c && flag == 1)
			break ;
		(*i) = (*i) + 1;
	}
	res[count] = '\0';
	return (res);
}

char			**ft_split(char const *s, char c)
{
	char		**res;
	int			i;
	int			j;

	if (s == 0 || (res = split_allocator(s, c)) == 0)
		return (0);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if ((res[j++] = word_saver(s, c,
							word_size_getter(&s[i], c), &i)) == 0)
			{
				split_freer(res, j - 1);
				return (0);
			}
			continue;
		}
		i++;
	}
	res[j] = 0;
	return (res);
}
