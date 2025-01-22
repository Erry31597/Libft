/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:49:56 by eenei             #+#    #+#             */
/*   Updated: 2025/01/08 10:28:03 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;
	size_t			count;

	i = 1;
	count = 0;
	if (src == NULL || dest == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest > src)
	{
		i = -1;
		d += n - 1;
		s += n - 1;
	}
	while (count < n)
	{
		*d = *s;
		d += i;
		s += i;
		count++;
	}
	return (dest);
}
