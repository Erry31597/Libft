/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:46:59 by eenei             #+#    #+#             */
/*   Updated: 2025/01/06 11:01:35 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*end;
	const char	*start;
	char		*res;
	size_t		leng;

	start = s1;
	end = s1 + ft_strlen (s1) - 1;
	leng = end - start + 1;
	if (!s1)
		return (NULL);
	while (*start && ft_strchr(set, *start))
		start++;
	while (end >= start && ft_strchr (set, *end))
		end--;
	res = malloc (leng + 1);
	if (!res)
		return (NULL);
	ft_strlcpy (res, (char *)start, leng + 1);
	res[leng] = '\0';
	return (res);
}
