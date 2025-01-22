/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:01:31 by eenei             #+#    #+#             */
/*   Updated: 2025/01/09 10:51:27 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t num, size_t val)
{
	void	*buffer;
	size_t	totleng;

	if (num != 0 && val > (SIZE_MAX / num))
		return (NULL);
	buffer = malloc(num * val);
	if (!buffer)
		return (NULL);
	totleng = val * num;
	ft_bzero(buffer, totleng);
	return (buffer);
}
