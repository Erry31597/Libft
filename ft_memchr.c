/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 09:47:50 by eenei             #+#    #+#             */
/*   Updated: 2024/12/17 14:32:17 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int val, size_t num)
{
	unsigned char	*i;
	unsigned char	c;
	
	i = (unsigned char *)str;
	c = (unsigned char) val;
	if (i == 0)
	{
		return (NULL);
	}
	if (i[0] == c)
	{
		return (void *)i;
	}
	return ft_memchr(i + 1, val, num - 1);
}