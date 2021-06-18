/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:55:24 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/16 09:30:58 by pweinsto         ###   ########.fr       */
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

int	main(void)
{
	printf("%d\n", isalpha('K'));
	printf("%d\n", ft_isalpha('K'));
	return (0);
}
