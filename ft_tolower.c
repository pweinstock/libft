/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 09:04:09 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/16 09:31:34 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
	{
		i += 32;
	}
	return (i);
}

int	main(void)
{
	printf("%c\n", ft_tolower('8'));
	printf("%c\n", tolower('8'));
	return (0);
}
