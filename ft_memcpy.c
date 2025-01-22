/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:10:20 by eenei             #+#    #+#             */
/*   Updated: 2024/12/13 12:10:20 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	if (!src || !dest)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest != src)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// int	main()
// {
// 	char *src = "hello, soreta";
// 	char dest[] = "";
// 	size_t n = 6;

// 	printf("%s\n", (char *)ft_memcpy(dest, src, n));
// }