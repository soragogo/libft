/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:43:49 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/31 10:10:53 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

// // bonus part
// t_list *ft_lstnew(void *content);

// typedef struct s_list
// {
//     void *content;
//     struct s_list *next;
// } t_list;

int ft_atoi(const char *str);
void *ft_bzero(void *b, int n);
void *ft_calloc(size_t count, size_t size);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
char *ft_memchr(const void *s, int ch, size_t n);
int ft_memcmp(const void *buf1, const void *buf2, size_t n);
void *ft_memcpy(void *dst, const void *src, int n);
void *ft_memmove(void *dst, const void *src, int n);
void *ft_memset(void *b, int c, int n);
char *ft_strchr(const char *s, int c);
char *ft_strdup(const char *str);
void ft_else(char *dest, char *src, unsigned int size);
size_t ft_strlen(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(char *str, char *to_find, int n);
char *ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_isalnum(int c);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char *));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);

#endif