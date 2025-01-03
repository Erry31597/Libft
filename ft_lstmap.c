/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:42:46 by eenei             #+#    #+#             */
/*   Updated: 2025/01/03 10:33:04 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void (*)(void *), void(*del)(void *))
{
	t_list	*nlst;
	t_list	*nnode;
	t_list	*lista;

	nlst = NULL;
	lista = lst;
	while (lista)
	{
		nnode = ft_lstnew (f(lista -> content));
		if (!nnode)
		{
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, nnode);
		lista = lista -> next;
	}
	return (nlst);
}