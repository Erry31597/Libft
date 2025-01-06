/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:18:51 by eenei             #+#    #+#             */
/*   Updated: 2025/01/06 13:37:42 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	num;
	
	num = n;
	if (num < 0)
	{
		ft_putchar_fd(fd, '-');
		num = -num;
	}
	if (num > 9)
	{
		ft_putnbr_fd(num / 10, fd);
		num = num % 10;
		ft_putchar_fd(num, fd);
	}
}
