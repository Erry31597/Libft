/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:44:03 by eenei             #+#    #+#             */
/*   Updated: 2025/01/08 10:07:17 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*buffer;
	int				len;
	unsigned int	i;

	i = 0;
	len = 0;
	if (!s || !f)
		return (NULL);
	while (s[len] != '\0')
		len++;
	buffer = (char *)malloc(sizeof(char) * (len + 1));
	if (!buffer)
		return (NULL);
	while (s[i] != '\0')
	{
		buffer[i] = (*f)(i, s[i]);
		i++;
	}
	buffer[len] = '\0';
	return (buffer);
}
