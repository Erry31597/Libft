/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:00:57 by eenei             #+#    #+#             */
/*   Updated: 2025/01/03 15:51:34 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *str, char c)
{
	size_t	count;
	size_t	word;

	count = 0;
	word = 0;
	while (*str)
	{
		if (*str == c)
		{
			word = 0;
		}
		else if (word == 0)
		{
			word = 1;
			count++;
		}
		str++;
	}
	return (count);
}
	
static int	word_len(const char *str, char c)
{
	size_t	i;
	
	i = 0;
	while (str[i] != '\0' && str[i] != c)
	{
		i++;
	}
	return (i);
}

static void	free_s(char **matrix, int end)
{
	int	i;

	i = 0;
	while (i < end)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

static char	**f_matrix(const char *str, char c, char **matrix, int word)
{
	int	i;
	int	i_mat;
	int	leng;

	i = 0;
	i_mat = 0;
	while (*str && i_mat < word)
	{
		while (str[i] == c)
			i++;
		if (str[i])
		{
			leng = word_len(&str[i], c);
			matrix[i_mat] = ft_substr(str, i, leng);
			if (!matrix[i_mat])
			{
				free_s(matrix, i_mat);
				return (NULL);
			}
			i += leng;
			i_mat++; 
		}
	}
	matrix[i_mat] = NULL;
	return (matrix);
}

char	**ft_split(const char *s, char c)
{
	char	**matrix;
	int		count;
	
	if(!s)
		return (NULL);
	count = word_count(s, c);
	matrix = (char **)malloc(sizeof(char *) * (count + 1));
	if (!matrix)
		return (NULL);
	matrix = f_matrix(s, c, matrix, count);
	if (!matrix)
		return (NULL);
	return (matrix);
}
