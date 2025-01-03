/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:46:59 by eenei             #+#    #+#             */
/*   Updated: 2025/01/03 16:16:09 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*end;
	char	*buffer;
	int	i;

	i = 0;
	end = s1;
	while (s1[i] == ' ' || (s1[i] >= 9 && s1[i] <= 13))
	{
		i++;
	}
	if (*s1 == '\0')
		return (NULL);
	while (*end == '\0')
	{
		end--;
	}
	while ((end < s1 && *end == ' ') || (*end >= 9 && *end <= 13))
	{
		end--;
	}
	end == '\0';
	return ((char *)s1);
}