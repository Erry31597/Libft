/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:20:03 by eenei             #+#    #+#             */
/*   Updated: 2024/12/12 15:20:03 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <>

void	*ft_memset(void *str, int val, size_t size)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	while (size > 0)
	{
		*s = (unsigned char *)val;
		s++;
	}
	return (s);
}

/*intmain(void)
{
	char *array[] = "A";
	size_t	n;

	n = 6;
	ft_memset (buffer, &array, n);
	printf("%c", array);

}*/