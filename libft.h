/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:44:56 by eenei             #+#    #+#             */
/*   Updated: 2025/01/02 12:17:41 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

// funzioni controllo caratteri
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnun(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
char			ft_istoupper(int c);
char			ft_istolower(int c);
// funzioni controllo stringhe
int				ft_atoi(const char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_strlen(const char *str);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr(const char *str, char c);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);


typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}					t_list;

void	ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lst_last(t_list *lst);
t_list *ft_lstmap(t_list *lst, void (*)(void *), void(*del)(void *));
t_list	*ft_lstnew(void *content);
int	ft_lstsize(t_list *lst);
#endif