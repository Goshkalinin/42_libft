/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalinin <ikalinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:34:49 by ikalinin          #+#    #+#             */
/*   Updated: 2023/01/28 16:45:18 by ikalinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*header*/
int	ft_isascii(int c);

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
#include <ctype.h>
#include <stdio.h>
void	main(void)
{
	char a;
	a = 128;
	printf("%d", isascii(a));
	printf("%d", ft_isascii(a));
}
*/
