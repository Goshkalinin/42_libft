/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalinin <ikalinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:51:44 by ikalinin          #+#    #+#             */
/*   Updated: 2023/01/28 04:34:21 by ikalinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* compare memory areas
**
**
**
**
**
*/

#include <stddef.h>

/*header*/
int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;

	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*ss1 != *ss2)
		{
			return (*ss1 - *ss2);
		}
	ss1++;
	ss2++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int     main()
{
	char str[] = " ASHDA SASHA PO SHOssE";
	char str2[] = " ASHL SASHA PO";


	printf("\nour first  string: %s", str);
	printf("\nour second string: %s", str2);

	printf("\nmemcmp: %d", memcmp(str, str2, 10));
	printf("\nft_memcmp: %d", ft_memcmp(str, str2, 10));
	return (0);
}
*/
