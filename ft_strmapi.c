/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:44:03 by eenei             #+#    #+#             */
/*   Updated: 2024/12/17 15:03:06 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const  *s, char (*f)(unsigned int, char))
{
	char	*buffer;
	size_t	len;
	unsigned int	i;

	if(!s || !f)
		return (NULL);
	while (s[len] != '\0')
		len++;
	buffer = (char *)malloc(sizeof(char) * (len + 1));
	if(!buffer)
		return (NULL);
	while (i < len)
	{
		buffer[i] = f(i, s[i]);
	}
	buffer[len] = '\0';
	return (buffer);
}
