/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 10:53:02 by eenei             #+#    #+#             */
/*   Updated: 2025/01/09 09:32:41 by eenei            ###   ########.fr       */
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
