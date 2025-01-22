/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:29:16 by eenei             #+#    #+#             */
/*   Updated: 2025/01/13 11:30:45 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <bsd/string.h>
char	*ft_strnstr(const char *src, const char *to_find, size_t leng)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*to_find == '\0')
		return ((char *)src);
	if (leng == 0)
		return (NULL);
	while (src[i] != '\0' && i < leng)
	{
		j = 0;
		if (src[i] == to_find[j])
		{
			while ((src[i + j] == to_find[j]) && (i + j) < leng \
					&& (src[i + j] && to_find[j]))
			{
				if (to_find[j + 1] == '\0')
					return ((char *)&src[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {

// 	printf("mio caro amor : %s\n", ft_strnstr("amore mio", "mio", 15));
// 	printf("suo caro amor : %s\n", strnstr("amore mio", "mio", 15));

// }