/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalinin <ikalinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 03:39:51 by ikalinin          #+#    #+#             */
/*   Updated: 2023/01/24 16:37:45 by ikalinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main (int argc, char** argv)
{
	size_t size;
	size = 8;
	memset(argv[argc-1], 'z', size);
	printf("%s", argv[argc-1]);
	
	while (size--)
	{
		*argv[0] = 'Z';
	}


	return (0);
}
