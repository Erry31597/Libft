/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eenei <eenei@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:44:56 by eenei             #+#    #+#             */
/*   Updated: 2025/01/06 13:09:32 by eenei            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// funzioni controllo caratteri
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnun(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
char				ft_toupper(char c);
char				ft_tolower(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
// funzioni controllo stringhe
int					ft_atoi(const char *str);
unsigned int		ft_strlcat(char *dest, char *src, unsigned int size);
int					ft_strlen(const char *str);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size);
char				*ft_itoa(int n);
char				*strnstr(const char *src, const char *to_find, size_t leng);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_bzero(void *str, size_t lun);
// funzioni controllo memoria
void				*ft_memchr(const void *str, int val, size_t n);
int					ft_memcmp(const void *str1, const void *str2, size_t n);
void				*ft_memcpy(void *dest, void *src, size_t n);
void				*ft_memmove(void *dest, void *src, size_t n);
void				*ft_memset(void *str, int val, size_t size);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lst_last(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);

#endif