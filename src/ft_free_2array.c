/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_2array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfournie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 19:21:45 by sfournie          #+#    #+#             */
/*   Updated: 2021/10/05 17:45:08 by sfournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_free_2array(void **ptr)
{
	int	i;

	i = 0;
	if (ptr == NULL)
		return (NULL);
	while (ptr != NULL && ptr[i] != NULL)
		ft_free(ptr[i++]);
	ft_free(ptr);
	return (NULL);
}
