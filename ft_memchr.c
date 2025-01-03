/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 09:47:50 by eenei             #+#    #+#             */
/*   Updated: 2025/01/03 14:34:42 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int val, size_t n)
{
	unsigned char	*s1;
	size_t			i;
	
	i = 0;
	if (!str)
		return (NULL);
	s1 = (unsigned char *)str;
	while (i < n)
	{
		if (s1[i] == val)
			return (&s1[i]);
		i++;
	}
	return (NULL);
}