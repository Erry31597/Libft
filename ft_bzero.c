/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:04:46 by eenei             #+#    #+#             */
/*   Updated: 2024/12/13 12:04:46 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t lun)
{
	unsigned char *ptr;
	size_t	i;

	ptr = str;
	i = 0;
	while (i < lun)
	{
		ptr[i] = '0';
		i++;
	}
	return (ptr);
}