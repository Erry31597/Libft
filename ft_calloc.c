/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:01:31 by eenei             #+#    #+#             */
/*   Updated: 2024/12/18 10:41:50 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t val)
{
	void	*buffer;
	size_t	i;
	size_t	totleng;
	unsigned char	*byte;
	
	
	i = 0;
	buffer = malloc(num * val);
	if (!buffer)
		return (NULL);
	byte = buffer;
	totleng = num * val;
	while (i < totleng)
	{
		byte = 0;
		i++;
	}
	return (buffer);
}