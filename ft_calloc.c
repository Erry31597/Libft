/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:01:31 by eenei             #+#    #+#             */
/*   Updated: 2024/12/17 13:02:27 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t val)
{
	int*buffer;
	int	i;
	
	i = 0;
	buffer = (int *)calloc (20, sizeof(int));
	if (buffer == NULL)
	{
		return (NULL);
	}
	while (i <= 20)
	{
		i++;
	}
	free (buffer);
}