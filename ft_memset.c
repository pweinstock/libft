/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 11:16:14 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/17 12:57:52 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

int	main(void)
{
	char	str[20] = "This is a test";
	int		c;
	size_t	len;

	len = 5;
	c = 'x';
	printf("%s\n", str);
	//printf("%s\n", memset(str + 2, c, len));
	printf("%s\n", ft_memset(str + 2, c, len));
	printf("%s\n", str);
	return (0);
}
