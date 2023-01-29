/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalinin <ikalinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 03:11:50 by ikalinin          #+#    #+#             */
/*   Updated: 2023/01/29 04:26:40 by ikalinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stddef.h>

/*header*/
void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ssrc;
	char	*ddest;

	ssrc = (char *)src;
	ddest = (char *)dest;
	if (ssrc == ddest)
		return (NULL);
	while (n--)
		ddest[n] = ssrc[n];
	return (ddest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char *str = memcpy(argv+1, argv+2, 2);
	printf("%s", str);
	return (0);
}
*/
