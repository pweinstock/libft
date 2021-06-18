/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 18:12:02 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/17 19:26:42 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	temp;
	//unsigned char	temp[len];
	i = 0;
	/*while (i < len)
	{
		temp[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = temp[i];
		i++;
	}*/
	while (i < len)
	{
		temp = ((unsigned char *)src)[i];
		((unsigned char *)dst)[i] = temp;
		i++;
	}
	return (dst);
}

int	main(void)
{
	char	dst[20] = "destination";
	char	*src;
	size_t	len;

	src = "sourceand123456";
	len = 10;
	printf("%s\n", dst);
	//printf("%s\n", memmove(dst, src, len));
	printf("%s\n", ft_memmove(dst, src, len));
	return (0);
}
