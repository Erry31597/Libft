/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:01:31 by eenei             #+#    #+#             */
/*   Updated: 2025/01/06 10:40:00 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t val)
{
	void	*buffer;
	size_t	totleng;

	buffer = malloc(num * val);
	if (!buffer)
		return (NULL);
	totleng = num * val;
	ft_bzero(buffer, totleng);
	return (buffer);
}
