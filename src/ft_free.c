/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfournie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 19:34:25 by sfournie          #+#    #+#             */
/*   Updated: 2021/10/05 17:45:24 by sfournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

// Free and set to NULL
void	*ft_free(void *ptr)
{
	if (ptr == NULL)
		return (NULL);
	free(ptr);
	return (NULL);
}
