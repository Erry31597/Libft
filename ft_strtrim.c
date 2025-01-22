/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:46:59 by eenei             #+#    #+#             */
/*   Updated: 2025/01/08 14:56:42 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static char	*cpy(char *dest, const char *src, int start, int end)
{
	int	i;

	i = 0;
	while (start <= end)
	{
		dest[i] = src[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	int		start;
	int		end;
	int		len;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (s1[start] != '\0' && is_set(s1[start], set) == 1)
		start++;
	while (end > start && is_set(s1[end], set) == 1)
		end--;
	len = end - start;
	str = (char *) malloc(sizeof(char) * len + 2);
	if (!str)
		return (NULL);
	str = cpy(str, s1, start, end);
	return (str);
}

// int	main()
// {
// 	printf("%s\n", ft_strtrim("bellaciao", "bella"));
// }