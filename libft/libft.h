/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:43:49 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/20 18:57:45 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int     ft_atoi(const char *str);
void	*ft_bzero(void *b, int n);
void    *ft_calloc(int n, int size);
int 	ft_isdigit(int c);
int 	ft_isalpha(int c);
int 	ft_isascii(int c);
int		ft_isdigit(int c);
int 	ft_isprint(int c);
char    *ft_memchr(const void *s, int ch, int n);
int     ft_memcmp(const void *buf1, const void *buf2, int n);
void    *ft_memcpy(void *dst, const void *src, int n);
void    *ft_memmove(void *dst, const void *src, int n);
void	*ft_memset(void *b, int c, int n);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *str);
void	ft_else(char *dest, char *src, unsigned int size);
size_t	ft_strlen(const char *str);
int     ft_strncmp(char *s1, char *s2, unsigned int n);
char    *ft_strnstr(char *str, char *to_find, int n);
char    *ft_strrchr(const char *s, int c);
char 	*ft_tolower(char *str);
char 	*ft_toupper(char *str);
int	ft_isalnum(int c);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
size_t ft_strlcat(char * dst, const char * src, size_t dstsize);
#endif