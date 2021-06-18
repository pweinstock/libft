/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 10:18:08 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/17 10:59:32 by pweinsto         ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	while (dstlen + i < dstsize - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = 0;
	return (dstlen + srclen);
}

int	main(void)
{
	char	dst[20] = "destination";
	char	*src;
	size_t	dstsize;

	//dst = "destination";
	src = "";
	dstsize = 17;
	printf("%s\n", dst);
	//printf("%lu\n", strlcat(dst, src, dstsize));
	printf("%lu\n", ft_strlcat(dst, src, dstsize));
	printf("%s\n", dst);
	printf("%d\n", dst[dstsize - 1]);
	//printf("%s\n", src);
	return (0);
}
