/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:00:57 by eenei             #+#    #+#             */
/*   Updated: 2025/01/02 15:42:24 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *str, char c)
{
	size_t	count;
	size_t	word;

	count = 0;
	word = 0;
	while (*str)
	{
		if (*str == c)
		{
			word = 0;
		}
		else if (word == 0)
		{
			word = 1;
			count++;
		}
		str++;
	}
	return (count);
}
	


char	**ft_split
{
	char	*buffer;
	size_t	i;
	size_t	len;
	
	i = 0;
	len = 0;
	buffer = (char *)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (buffer == NULL)
		return (NULL);
		
}
