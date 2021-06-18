/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:37:58 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/16 17:03:42 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i != 0)
	{
		if (s[i] == c)
		{
			return ((char *) &s[i]);
		}
		i--;
	}
	return (0);
}

int	main(void)
{
	const char	*s;
	int			c;

	s = "foo bar baz";
	c = 0;
	printf("%s\n", strrchr(s, c));
	printf("%s\n", ft_strrchr(s, c));
	return (0);
}
