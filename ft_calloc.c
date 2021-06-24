/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 10:06:56 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/22 11:22:34 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	int		*ptr;
	size_t	i;

	ptr = (int *)malloc(count * size);
	if (!ptr)
	{
		return (0);
	}
	i = 0;
	while (i < count)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
