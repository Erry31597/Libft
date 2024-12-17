/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:49:11 by eenei             #+#    #+#             */
/*   Updated: 2024/12/17 16:06:38 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, char c)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if(str[i] == c)
		{
			return (char *)&str[i];
		}
		i--;
	}
	return (NULL);
}