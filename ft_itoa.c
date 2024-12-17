/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:08:50 by eenei             #+#    #+#             */
/*   Updated: 2024/12/17 11:36:47 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <>

char	*ft_itoa(int n)
{
	char	*buffer;
	int	sign;
	int	len;
	
	len = 0
	res = 0;
	if (len < 0)
	{
		len++;
		n = -n;
	}
	while (n != 0)
	{
		n / 10;
		len++;
	}
	buffer = (char *)malloc(len + 1);
	if (buffer == NULL)
	{
		return (NULL);
	}
	buffer[len] = '\0';
	
	
	}