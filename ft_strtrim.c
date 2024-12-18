/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:46:59 by eenei             #+#    #+#             */
/*   Updated: 2024/12/18 11:25:21 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*	ft_strtrim(char const *s1, char const *set)
{
	char *fine;
	char *	buffer;

	fine = s1;
	while (s1 == ' ' || s1 >= 9 && s1 <= 13)
	{
		*s1++;
	}
	if (*s1 == '\0')
		return;
	while (*fine != '\0')
	{
		fine--;
	}
	while (fine < s1 && *fine == ' ' || *fine >= 9 && *fine <= 13)
	{
		fine--;
	}
	fine == '\0';
	return (s1);
}