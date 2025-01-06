/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:09:11 by eenei             #+#    #+#             */
/*   Updated: 2025/01/06 11:02:09 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*buffer;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	buffer = (char *) malloc(len + 1 * sizeof(char));
	if (buffer == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		buffer[i] = s[start + 1];
		i++;
	}
	buffer[len] = '\0';
	return (buffer);
}
