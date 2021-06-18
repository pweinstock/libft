/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 10:47:05 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/18 11:03:05 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
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

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	ptr = (char *)malloc(len * sizeof(char));
	while (i < len)
	{
		ptr[i] = s1[i];
		i++;
	}
	return (ptr);
}

int	main(void)
{
	const char	*s1;

	s1 = "This is a test";
	//printf("%s\n", strdup(s1));
	printf("%s\n", ft_strdup(s1));
	return (0);
}
