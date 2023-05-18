/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:43:49 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/18 15:25:12 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     ft_atoi(const char *str);
void	*ft_bzero(void *b, int n);
void    *ft_calloc(int n, int size);
int 	ft_isdigit(char c);
int 	ft_isalpha(char c);
int 	ft_isascii(char c);
int		ft_isdigit(char c);
int 	ft_isprint(char c);
char    *ft_memchr(const void *s, int ch, int n);
int     ft_memcmp(const void *buf1, const void *buf2, int n);
void    *ft_memcpy(void *dst, const void *src, int n);
void    *ft_memmove(void *dst, const void *src, int n);
void	*ft_memset(void *b, int c, int n);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *str);
void	ft_else(char *dest, char *src, unsigned int size);
int		ft_strlen(const char *s);
int     ft_strncmp(char *s1, char *s2, unsigned int n);
char    *ft_strnstr(char *str, char *to_find, int n);
char    *ft_strrchr(const char *s, int c);
char 	*ft_tolower(char *str);
char 	*ft_toupper(char *str);
#endif