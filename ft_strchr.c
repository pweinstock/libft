/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:05:38 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/16 17:27:58 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	if (c == 0)
	{
		return ((char *) &s[i]);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	const char	*s;
	int			c;

	s = "foo bar baz";
	c = 'r';
	printf("%s\n", strchr(s, c));
	printf("%s\n", ft_strchr(s, c));
	return (0);
}
