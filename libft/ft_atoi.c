/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalinin <ikalinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:58:12 by ikalinin          #+#    #+#             */
/*   Updated: 2023/01/28 23:03:55 by ikalinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* AlphabetTOIntegrer
** Whitespaces on first - igrored
** Gets symbol by symbol, and if symbol is nubmer - translate it to int
** const char - guarantee that func will not change values in string
** nptr - Number of PoiNteRs
*/

#include <stdio.h>

/*header*/
int	ft_atoi(const char *nptr);

int	ft_atoi(const char *nptr)
{
	signed int	isnegative;
	int			counter;
	int			nmbr;

	isnegative = 1;
	counter = 0;
	nmbr = 0;
	while (nptr[counter] == ' ' || (nptr[counter] >= 9 && nptr[counter] <= 13))
	{
		counter++;
	}
	if (nptr[counter] == '-' || nptr[counter] == '+')
	{
		isnegative = 44 - nptr[counter];
		counter++;
	}
	while ((nptr[counter] >= '0') && (nptr[counter] <= '9'))
	{
		nmbr = nptr[counter] - 48 + nmbr * 10;
		counter++;
	}
	return (nmbr * isnegative);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[90] = " -1232121222\n2102Y2A STRING YOPTA";

    printf("string: %s\n", str);
    printf("\nft_atoi: %d", ft_atoi(str));
    printf("\n   atoi: %d\n", atoi(str));
    return 0;
}
*/
