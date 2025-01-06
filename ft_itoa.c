/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:08:50 by eenei             #+#    #+#             */
/*   Updated: 2025/01/06 13:44:06 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenght(long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n  = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*buffer;
	int		len;

	len = lenght(n);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		n = -n;
		len++;
	}
	buffer = (char *)malloc(sizeof(char) * len + 1);
	if (buffer == NULL)
		return (NULL);
	buffer[len] = '\0';
	while (n > 0)
	{
		buffer[len] = (n % 10) + '0';
		n = n/ 10;
		len--;
	}
	return (buffer);
}
