/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 09:03:47 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/16 09:31:12 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
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
	printf("%d\n", ft_isascii(128));
	printf("%d\n", isascii(128));
	return (0);
}
