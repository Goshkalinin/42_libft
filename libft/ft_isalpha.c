/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalinin <ikalinin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 22:34:51 by ikalinin          #+#    #+#             */
/*   Updated: 2023/01/23 22:34:55 by ikalinin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*header*/
int	ft_isalpha(int i);

int	ft_isalpha(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		return (1);
	}
	if (i >= 'A' && i <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}