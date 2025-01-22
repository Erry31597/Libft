/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 09:23:11 by eenei             #+#    #+#             */
/*   Updated: 2025/01/08 11:52:20 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;
	char	*buffer;

	i = -1;
	j = -1;
	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	buffer = (char *)malloc(len1 + len2 + 1);
	if (!buffer)
		return (NULL);
	while (++i < len1)
		buffer[i] = s1[i];
	while (++j < len2)
		buffer[i + j] = s2[j];
	buffer[i + j] = '\0';
	return (buffer);
}
