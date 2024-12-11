/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:29:16 by eenei             #+#    #+#             */
/*   Updated: 2024/12/11 15:00:58 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *src, const char *to_find, size_t leng)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	if(to_find[0] == '\0')
		return (src);
	while (src[i] != '\0')
	{
		if(src[i] == to_find[j])
		{
			while (i < leng && src[i + j] == to_find[j] && to_find[j] != '\0')
			{
				j++;
			}
		}
		if (to_find[j] == '\0')
		{
			return (src[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}