/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 09:04:16 by pweinsto          #+#    #+#             */
/*   Updated: 2021/06/16 09:31:42 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <xlocale.h>
#include <stdio.h>
int	ft_toupper(int i)
{
	if (i >= 97 && i <= 122)
	{
		i -= 32;
	}
	return (i);
}

int	main(void)
{
	printf("%c\n", ft_toupper('N'));
	printf("%c\n", toupper('N'));
	return (0);
}
