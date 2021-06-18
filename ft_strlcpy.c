/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:45:02 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/17 10:16:34 by pweinsto         ###   ########.fr       */
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

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (srclen == 0)
	{
		return (ft_strlen(src));
	}
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (srclen);
}

int	main(void)
{
	char	dst[7];
	char	*src;
	size_t	dstsize;

	src = "source";
	dstsize = 7;
	printf("%s\n", dst);
	printf("%lu\n", strlcpy(dst, src, dstsize));
	printf("%lu\n", ft_strlcpy(dst, src, dstsize));
	printf("%s\n", dst);
	printf("%d\n", dst[dstsize - 1]);
	printf("%s\n", src);
	return (0);
}
