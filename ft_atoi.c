/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:01:14 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/16 12:03:46 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_isdigit(int i)
{
	if (i >= '0' && i <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0 && ft_isdigit(str[i]) == 1)
	{
		i++;
	}
	return (i);
}

int	multi(int i)
{
	int	sum;

	sum = 1;
	while (i > 0)
	{
		sum *= 10;
		i--;
	}
	return (sum);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	sum;

	i = 0;
	j = ft_strlen(str);
	sum = 0;
	while (j != 0)
	{
		sum += (str[i] - 48) * multi(j - 1);
		i++;
		j--;
	}
	return (sum);
}

int	main(void)
{
	char	*str;

	str = "62ty58dfgf";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
	return (0);
}
