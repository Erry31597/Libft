/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:03:54 by eenei             #+#    #+#             */
/*   Updated: 2025/01/09 10:09:50 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <bsd/string.h>

size_t	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	size_t	i;
	size_t	dlung;
	size_t	slung;

	dlung = 0;
	slung = 0;
	i = 0;
	if (!dest)
		return (0);
	dlung = ft_strlen(dest);
	slung = ft_strlen(src);
	if (size <= dlung)
		return (size + slung);
	while (src[i] != '\0' && (dlung + i) < size - 1)
	{
		dest[i + dlung] = src[i];
		i++;
	}
	dest[dlung + i] = '\0';
	return (dlung + slung);
}

// int	main(void)
// {
// 	char 	dest[4] = "ciao";

// 	// memset(dest, 'r', 15);
// 	printf("mio caro amor : %zu\n", ft_strlcat(dest, "lorem", 15));
// 	//printf("suo caro amor : %zu\n", strlcat(dest, "lorem", 15));

// }
