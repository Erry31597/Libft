/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 09:28:45 by eenei             #+#    #+#             */
/*   Updated: 2024/12/18 11:38:47 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char	*buffer;
	int	i;
	int	j;

	j = 0;
	while (str[j] = '\0')
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