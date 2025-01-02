/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:53:37 by eenei             #+#    #+#             */
/*   Updated: 2025/01/02 13:57:29 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*count_word(const char *str, char c)
{
	int	i;
	int	count;
	char	*buffer;
	
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i + 1] != c && str[i - 1] == c)
		count++;
	}
	i++;
	buffer = (char *)malloc((count + 1) * sizeof(char *));
		if (buffer== NULL)
	{
		return (NULL);
	}
	return (count);
}

char	*world_len(const char *str, char c, int *indice)
{
	int	i;
	int	j;
	int	len;
	char	*len_buffer;

	i = *indice;
	j = 0;
	len = 0;
	while (str[i + len] != '\0' && str[i + len] != c)
		len++;
	len_buffer = (char *)malloc((len + 1) * sizeof(char *));
	if (len_buffer == NULL)
	{
		return (NULL);
	}
	while (j < len)
	{
		len_buffer[j] = str[i + j];
		j++;
	}
	len_buffer[len] = '\0';
	*indice += len;
	return (len_buffer);
}

char	**ft_split(const char *s, char c)
{
	char	*buffer;
}