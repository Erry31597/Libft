/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:03:54 by eenei             #+#    #+#             */
/*   Updated: 2024/12/17 13:03:59 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dlung;
	unsigned int	slung;

	dlung = 0;
	slung = 0;
	i = 0;
		while(dest[dlung] != '\0')
		{
			dlung++;
		}
		while(src[slung] != '\0')
		{
			slung++;
		}
		if(size <= dest[dlung])
		{
			return(size + slung);
		}
		while(src[i] != '\0' && dlung + i -1)
		{
			dest[dlung + i] = src[i];
			i++;
		}
		dest[dlung + i] = '\0';
		return (dlung + slung);
}