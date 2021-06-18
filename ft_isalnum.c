/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 09:37:10 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/16 09:51:16 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int i)
{
	if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

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

int	ft_isalnum(int i)
{
	if (ft_isalpha(i) == 1 || ft_isdigit(i) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	printf("%d\n", isalnum('-'));
	printf("%d\n", ft_isalnum('-'));
	return (0);
}
