/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalinin <ikalinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:07:13 by ikalinin          #+#    #+#             */
/*   Updated: 2023/01/29 04:42:35 by ikalinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*header*/
size_t	ft_strlen(const char *s);

size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (*s++)
		size++;
	return (size);
}
/*
#include <stdio.h>
#include <string.h>
int main(int arc, char **argv)
{
	printf("ft_strlen: %ld\n", ft_strlen(*(argv+1)));
	printf("strlen: %ld\n", strlen(*(argv+1)));

	return 0;
}
*/
