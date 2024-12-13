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

#include<>

void	*ft_memcpy(void *dest, void* src, size_t lun)
{
	int	i;
	int	j;
	char *dest;

	i = 0;
	j =0;
	dest = (char *)malloc(sizeof(char));
	if (dest == NULL)
	{
		return (0);
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}

}