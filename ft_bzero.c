/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 12:59:29 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/17 17:12:18 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

int	main(void)
{
	char	str[20] = "This is a test";
	size_t	n;
	size_t	i;

	n = 0;
	i = 0;
	printf("%s\n", str);
	bzero(str, n);
	//ft_bzero(str, n);
	printf("%s\n", str);
	while (i < 10)
	{
		printf("%d\n", str[i]);
		i++;
	}
	return (0);
}
