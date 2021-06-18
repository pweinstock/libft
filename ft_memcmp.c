/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 20:09:35 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/18 09:17:53 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i] || (((unsigned char *)s1)[i] == 0 || ((unsigned char *)s2)[i] == 0))
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		else
		{
			i++;
		}
	}
	return (0);
}

int	main(void)
{
	const void	*str1;
	const void	*str2;

	str1 = "test";
	str2 = "";
	//printf("%d\n", memcmp(str1, str2, 6));
	printf("%d\n", ft_memcmp(str1, str2, 6));
	return (0);
}
