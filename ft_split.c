/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:53:37 by eenei             #+#    #+#             */
/*   Updated: 2024/12/18 15:20:00 by eenei            ###   ########.fr       */
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
}

char	**ft_split(const char *s, char c)
{
	char	*buffer;
}