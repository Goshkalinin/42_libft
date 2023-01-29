/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalinin <ikalinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:39:40 by ikalinin          #+#    #+#             */
/*   Updated: 2023/01/29 03:12:41 by ikalinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strrchr() function returns a pointer
** to the last occurrence of the character c in the string s (instead of strchr).
*/

#include <stddef.h>

/*header*/
char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	if (c == '\0')
		return ((char *) &s[i]);
	while (i--)
	{
		if (s[i] == c)
			return ((char *) &s[i]);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "qwe";
	char c = 'Q';
	//printf("%s", ft_strrchr(str, c));
	printf("%s", strrchr(str, c));
	return (0);
}
*/
