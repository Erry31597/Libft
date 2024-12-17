/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:10:26 by eenei             #+#    #+#             */
/*   Updated: 2024/12/17 15:52:41 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_toupper(unsigned int index, char *c)
{
	if(*c >= 'a' && *c <= 'z')
	{
		*c = *c - 32;
	}
}

void	ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	unsigned int	i;

	i = 0;
	while(s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*int	main()
{
	char	str[] = "hello, world!";

	ft_striteri(str, ft_toupper);
	printf("Stringa modificata: %s\n", str);
	return (0);
}*/