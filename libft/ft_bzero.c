/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalinin <ikalinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 03:05:16 by ikalinin          #+#    #+#             */
/*   Updated: 2023/01/26 16:53:25 by ikalinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Name meaning "zero bites", i guess
**
** Erazes n bites in an array by writing nulls
** "void *pntr" means that pointer can be anytype
** <string.h> must be included for size_t datatype usage
** AND THE TRICK IS IN THE DIIF BETWEEN ZERO SYMBOL AND ZERO BYTE LOL
*/

#include  <stddef.h>

/*header*/
void	ft_bzero(void *s, size_t n);

void	ft_bzero(void *s, size_t n)
{
	char	zero;
	char	*p;

	zero = '\0';
	p = (char *)s;
	while (n--)
		p[n] = zero;
}

/*
###include <stdio.h>
###include <string.h>
##int	main()
##{
##	char str[50] = "AMA STRING";
##	printf("\n%s", str);
##
##	ft_bzero(str, 3);
##	printf("\n ft_bzero: %s", str);
##
##	bzero(str, 1);
##	printf("\nbzero: |%c|", *(str+0));
##
##	printf("\n");
##	return (0);
##}
*/
