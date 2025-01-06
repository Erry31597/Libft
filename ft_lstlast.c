/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 10:53:02 by eenei             #+#    #+#             */
/*   Updated: 2025/01/06 13:56:13 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		leng;
	int		i;
	
	leng = ft_lstsize(lst);
	i = 0;
	while ((i + 1) < leng)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
