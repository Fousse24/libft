/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdigits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfournie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:21:17 by sfournie          #+#    #+#             */
/*   Updated: 2021/09/17 18:53:52 by sfournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

// Return the amount of digits. Negatives does not increase the count
int	ft_countdigits(long long int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		if (n == LONG_MIN)
			n += 1;
		n *= -1;
	}
	while ((n / 10) > 0 || (n % 10) != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
