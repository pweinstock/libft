/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:44:59 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/17 18:08:08 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	int		*ptr;

	i = 0;
	ptr = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		if (((unsigned char *)src)[i] == (unsigned char )c)
		{
			return (dst + i + 1);
		}
		i++;
	}
	return (ptr);
}

int	main(void)
{
	char	dst[20] = "destination";
	char	*src;
	size_t	n;
	int		c;

	src = "source";
	n = 6;
	c = 'x';
	printf("%s\n", dst);
	//printf("%s\n", memccpy(dst, src, c, n));
	printf("%s\n", ft_memccpy(dst, src, c, n));
	printf("%s\n", dst);
	return (0);
}
