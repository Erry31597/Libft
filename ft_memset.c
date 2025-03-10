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

void	*ft_memset(void *str, int val, size_t size)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	if (!str)
		return (NULL);
	s = (unsigned char *)str;
	while (i < size)
	{
		s[i] = val;
		i++;
	}
	return (str);
}

/*int main(void)
{
	char *array[] = "A";
	size_t	n;

	n = 6;
	ft_memset (buffer, &array, n);
	printf("%c", array);

}*/