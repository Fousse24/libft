/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfournie <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 16:50:55 by sfournie          #+#    #+#             */
/*   Updated: 2021/05/17 17:54:19 by sfournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*iter;

	if (lst == NULL)
		return (NULL);
	iter = (void *)malloc(sizeof(t_list));
	if (lst->content != NULL)
		iter->content = f(lst->content);
	if (lst->next != NULL)
		iter->next = ft_lstmap(lst->next, f, del);
	else
		iter->next = NULL;
	return (iter);
}
