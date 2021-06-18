/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:08:42 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/16 12:49:05 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || (s1[i] == 0 || s2[i] == 0))
		{
			return (s1[i] - s2[i]);
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
	char	*str1;
	char	*str2;

	str1 = "dfd";
	str2 = "dfd";
	printf("%d\n", strncmp(str1, str2, 6));
	printf("%d\n", ft_strncmp(str1, str2, 6));
	return (0);
}
