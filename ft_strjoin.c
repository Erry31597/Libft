/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 09:23:11 by eenei             #+#    #+#             */
/*   Updated: 2025/01/06 11:37:55 by eenei            ###   ########.fr       */
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

	i = 0;
	j = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	buffer = (char *)malloc(len1 + len2 + 1);
	if (!buffer)
		return (NULL);
	while (i++ < len1)
		buffer[i] = s1[i];
	while (j++ < len2)
		buffer[i + j] = s2[j];
	buffer[i + j] = '\0';
	return (buffer);
}

/*int	main()
{
	const char	*s1 = "ciao";
	const char	*s2 = "bello";
	char	*buffer = ft_strjoin(s1, s2);
	
	printf("%s\n", buffer);
}*/