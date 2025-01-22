/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:09:24 by eenei             #+#    #+#             */
/*   Updated: 2025/01/08 15:37:59 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;

	if (!lst || !*lst || !del)
		return ;
	new = *lst;
	while (new != NULL)
	{
		tmp = new->next;
		ft_lstdelone(new, del);
		new = tmp;
	}
	*lst = NULL;
}

// int	main(void)
// {
// 	t_list *node1 = malloc(sizeof(t_list));
// 	t_list *node2 = malloc(sizeof(t_list));
// 	t_list *node3 = malloc(sizeof(t_list));

// 	node1->content = strdup("First");
// 	node1->next = node2;

// 	node2->content = strdup("Second");
// 	node2->next = node3;

// 	node3->content = strdup("Third");
// 	node3->next = NULL;

// 	printf("Lista prima:\n");
// 	print_list(node1);
// 	ft_lstclear(&node1, del);
// 	printf("Lista dopo:\n");
// 	print_list(node1);
// }