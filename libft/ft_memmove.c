/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalinin <ikalinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:14:55 by ikalinin          #+#    #+#             */
/*   Updated: 2023/01/29 17:12:09 by ikalinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stddef.h>

/*header*/
void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char    *ssrc;
	char    *ddest;

	ssrc = (char *)src;
	ddest = (char *)dest;

	if (ssrc == ddest)
		return (NULL);
	while (n--)
	{
		ddest[n] = ssrc[n];
	}
	return (ddest);
}

#include <stdio.h>
#include <string.h>
int	main(int argc, char **argv)
{
	char *str1 = *(argv+1);
	char *str2 = *(argv+1)[2];
	char str3[] = "POLOZEN";

	memmove(str3, str1, 3);
	printf("\nmemmove: %s", str3);
	ft_memmove(str3, str2, 3);
	printf("\nft_memmove: %s", str3);

	return (0);
}
