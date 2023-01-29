/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalinin <ikalinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:37:11 by ikalinin          #+#    #+#             */
/*   Updated: 2023/01/25 02:07:20 by ikalinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*header*/
int	ft_isalnum(int c);

int	ft_isalnum(int c)
{
	int	islow;
	int	isupper;
	int	isdigit;

	islow = ((c >= 'a') && (c <= 'z'));
	isupper = ((c >= 'A') && (c <= 'Z'));
	isdigit = ((c >= '0') && (c <= '9'));
	if (islow ^ isupper ^ isdigit)
		return (1);
	else
		return (0);
}
