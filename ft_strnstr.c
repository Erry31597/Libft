/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:29:16 by eenei             #+#    #+#             */
/*   Updated: 2025/01/03 16:10:11 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *src, const char *to_find, size_t leng)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	if(to_find[0] == '\0')
		return ((char *)src);
	while (src[i] != '\0')
	{
		if(src[i] == to_find[j])
		{
			while (i < leng && src[i + j] == to_find[j] && to_find[j] != '\0')
			{
				j++;
			}
		}
		if (to_find[j] == '\0')
		{
			return ((char *)&src[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}