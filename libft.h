/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: UTurkey <uturkey@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 23:48:17 by UTurkey           #+#    #+#             */
/*   Updated: 2020/05/19 00:10:25 by UTurkey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <string.h>
#include <stdlib.h>

int				ft_toupper(int ch);
int				ft_tolower(int ch);
int				ft_isdigit(int ch);
int				ft_isalpha(int ch);
int				ft_isalnum(int ch);
int				ft_isascii(int ch);
int				ft_isprint(int ch);
void			*ft_memset(void *destin, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *destin, const void *source, size_t n);
void			*ft_memccpy(void *destin, const void *source, int c, size_t n);
void			*ft_memmove(void *destin, const void *source, size_t n);
void			*ft_memchr(const void *source, int c, size_t n);
int				ft_memcmp(const void *arr1, const void *arr2, size_t n);
size_t			ft_strlen(const char *str);
char			*ft_strdup(const char *s1);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t 			ft_strlcpy(char *dest, const char *src, size_t size);
char			*ft_strchr(const char *str, int ch);
char			*ft_strrchr(const char *str, int ch);
char			*ft_strstr(const char *str, const char *to_find);
char			*ft_strnstr(const char *str, const char *to_find, size_t n);
int				ft_atoi(const char *str);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int nbr);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			*ft_calloc(size_t num, size_t size);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_substr(char const *s, unsigned int start, size_t len);
#endif