/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfournie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 15:47:33 by sfournie          #+#    #+#             */
/*   Updated: 2021/05/23 14:23:33 by sfournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strpchr(const char *s, int c)
{
	int	i;

	if (!*s && c)
		return (0);
	i = 0;
	while (i <= (int)ft_strlen(s))
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}