/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:49:14 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/25 17:26:34 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	c = (unsigned char)c;
	while (((unsigned char *)s)[i] != 0 && i < n)
	{
		if (((unsigned char *)s)[i] == c)
		{
			return ((unsigned char *) &s[i]);
		}
		i++;
	}
	if (c == 0)
	{
		return ((unsigned char *) &s[i]);
	}
	else
	{
		return (0);
	}
}
