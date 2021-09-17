/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfournie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 15:47:33 by sfournie          #+#    #+#             */
/*   Updated: 2021/09/17 19:45:22 by sfournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

// Return index number of the first occurence of (c) in (s), or -1.
int	ft_strpchr(const char *s, int c)
{
	int	i;

	if (!*s && c)
		return (-1);
	i = 0;
	while (i <= (int)ft_strlen(s))
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
