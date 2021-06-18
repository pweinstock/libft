/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 19:49:14 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/17 20:07:18 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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

int	main(void)
{
	const void	*s;
	int			c;
	size_t		n;

	s = "foo bar baz";
	c = 'x';
	n = 10;
	//printf("%s\n", memchr(s, c, n));
	printf("%s\n", ft_memchr(s, c, n));
	return (0);
}
