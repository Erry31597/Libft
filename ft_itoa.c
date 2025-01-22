/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:08:50 by eenei             #+#    #+#             */
/*   Updated: 2025/01/09 09:59:12 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenght(long long int n)
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
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*buffer;
	int			len;
	long int	long_n;

	long_n = n;
	len = lenght(n);
	buffer = (char *)malloc(sizeof(char) * (len + 1));
	if (buffer == NULL)
		return (NULL);
	if (long_n == 0)
		buffer[0] = '0';
	if (long_n < 0)
	{
		buffer[0] = '-';
		long_n = -long_n;
	}
	buffer[len] = '\0';
	len--;
	while (long_n > 0)
	{
		buffer[len] = (long_n % 10) + '0';
		long_n = long_n / 10;
		len--;
	}
	return (buffer);
}

// int	main()
// {
// 	printf("%s\n", ft_itoa(-2147483648LL));
// }
