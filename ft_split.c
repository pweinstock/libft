/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:57:11 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/24 15:14:49 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static char	**ft_create_malloc(char const *s, char c)
{
	size_t	i;
	size_t	count;
	char	**ptr;

	i = 0;
	count = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
				i++;
		else
		{
			count += 1;
			while (s[i] != c && s[i] != 0)
				i++;
		}
	}
	ptr = (char **)malloc((sizeof(char *) * count) + 1);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	end;
	char	**ptr;

	if (!s)
		return (0);
	ptr = ft_create_malloc(s, c);
	if (!ptr)
		return (0);
	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		if (s[i] == c || s[i] == 0)
			i++;
		else
		{
			start = i;
			while (s[i] != c && s[i] != 0)
				i++;
			end = i;
			ptr[j] = ft_substr(s, start, end - start);
			start = end;
			j++;
		}
	}
	ptr[j] = 0;
	return (ptr);
}

int	main(void)
{
	char	**ptr;
	char	*s = "testatestatestatest";
	char	c = 'a';
	size_t	i;

	i = 0;
	ptr = ft_split(s, c);
	while (ptr[i] != 0)
		{
			printf("%s\n", ptr[i]);
			i++;
		}
	return (0);
}