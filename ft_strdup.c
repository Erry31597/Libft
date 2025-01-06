/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 09:28:45 by eenei             #+#    #+#             */
/*   Updated: 2025/01/06 15:06:23 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*buffer;
	int		i;
	int		j;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	buffer = (char *)malloc((j + 1));
	{
		if (buffer == NULL)
		{
			return (NULL);
		}
		i = 0;
		while (i < j)
		{
			buffer[i] = str[i];
			i++;
		}
		buffer[i] = '\0';
		return (buffer);
	}
}
