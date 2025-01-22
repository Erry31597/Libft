/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:09:11 by eenei             #+#    #+#             */
/*   Updated: 2025/01/10 14:33:15 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*buffer;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (unsigned int)ft_strlen(s) - start)
		len = (unsigned int)ft_strlen(s) - start;
	buffer = (char *)malloc(sizeof(*s) * (len + 1));
	if (buffer == NULL)
		return (NULL);
	while (s[i] && j < len)
	{
		if (i >= start && j < len)
		{
			buffer[j++] = s[i];
		}
		i++;
	}
	buffer[j] = '\0';
	return (buffer);
}
