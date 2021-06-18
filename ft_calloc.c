/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 10:06:56 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/18 10:43:26 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	int		*ptr;
	size_t	i;

	ptr = (int *)malloc(count * size);
	i = 0;
	while (i < count)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

int	main(void)
{
	size_t	count;
	size_t	size;
	size_t	i;
	int		*ptr;

	count = 5;
	size = sizeof(int);
	i = 0;
	//ptr = (int *)calloc(count, size);
	ptr = (int *)ft_calloc(count, size);
	while (i < count + 10)
	{
		printf("%d", ptr[i]);
		i++;
	}
	printf("\n");
	return (0);
}
