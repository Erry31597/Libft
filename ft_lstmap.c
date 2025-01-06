/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:42:46 by eenei             #+#    #+#             */
/*   Updated: 2025/01/06 13:58:16 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*nnode;

	nlst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		nnode = ft_lstnew(f(lst -> content));
		if (!nnode)
		{
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, nnode);
		lst = lst -> next;
	}
	return (nlst);
}
