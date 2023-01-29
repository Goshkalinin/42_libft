/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   am.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalinin <ikalinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:48:37 by ikalinin          #+#    #+#             */
/*   Updated: 2023/01/28 16:10:55 by ikalinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Opisalovo:
** The  memchr()  function  scans the initial n bytes of the memory area
** pointed to by s for the first instance of c.
** Both c and the bytes of the memory area
** pointed to by s are interpreted as unsigned char.
**
** The  memchr()  and  memrchr()  functions return a pointer
** to the matching byte or NULL if the character
** does not occur in the given memory area.
**
** NULL istead of NUL is a special pointer value.
**
*/

#include <stddef.h>

/*header*/
void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	character;

	str = (unsigned char *)s;
	character = (unsigned char)c;
	while (n--)
	{
		if (*str == character)
		{
			return (str);
		}
	str++;
	}
	return (NULL);
}


#include <string.h>
#include <stdio.h>
/*
int	main()
{
	char str[] = " ASHLA SASHA PO SHOssE";

	printf("\nour string: %s", str);
	printf("\nmemchr: %s", (char *)memchr(str, 'A', 2));
	printf("\nft_memchr: %s", (char *)ft_memchr(str, 'A', 2));
	return (0);
}
*/

