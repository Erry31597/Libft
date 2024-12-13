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

#include <stdio.h>
//#include <>

void	*ft_memset(void *str, int val, size_t size)
{
	char	buffer;
	int	 c;

	buffer = (char *)malloc(sizeof(char));
	if (buffer == NULL)
	{
		return(0);
	}
	str = (char*) str + 1;
	while ( str != size)
	{
		str = (unsigned char) val;
		str++;
	}
	free(buffer);
}

/*intmain(void)
{
	char *array[] = "A";
	size_t	n;

	n = 6;
	ft_memset (buffer, &array, n);
	printf("%c", array);

}*/