/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:44:56 by eenei             #+#    #+#             */
/*   Updated: 2024/12/11 13:47:19 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft.h
# define libft .h

// funzioni controllo caratteri
int				ft_isalpha(char c);
int				ft_isdigit(char c);
int				ft_isalnun(char c);
int				ft_isascii(int c);
int				ft_isprint(int c);
char			ft_istoupper(char c);
char			ft_istolower(char c);
// funzioni controllo stringhe
int				ft_atoi(const char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				strlen(char *str);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, char c);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

#endif