/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:14:32 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/17 17:41:50 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

int	main(void)
{
	char	dst[20] = "destination";
	char	*src;
	size_t	n;

	src = "source";
	n = 6;
	printf("%s\n", dst);
	printf("%s\n", memcpy(dst, src, n));
	//printf("%s\n", ft_memcpy(dst, src, n));
	return (0);
}
