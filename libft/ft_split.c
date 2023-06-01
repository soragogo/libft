/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:09:01 by ekamada           #+#    #+#             */
/*   Updated: 2023/06/01 21:15:57 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_untilc_len(char const *s, char c)
{
	int i = 0;

	while(s[i] != c && s[i] != 0)
		i++;
	return (i);
}


char const *ft_ctrim(char const *s, char c)
{
	if (*s == c)
	{
		while(*s == c)
			s++;
	}
	return(s);
}


int ft_count_blocs(char const *s, char c)
{
	int count = 0;

	while (*s)
	{
		while (*s == c)
			s++;
		if(*s != c)
		{
			count ++;
			while (*s != c && *s)
				s++;
		}
		while (*s == c)
			s++;
	}
	return (count);
}

char **ft_split(char const *s, char c)
{
	int count = 0;
	int i = 0;
	char **matrix;

	if (*s == 0)
	{
		matrix = (char**)malloc(sizeof(char *));
		matrix[0] = NULL;
		return (matrix);
	}
	if (c == 0)
	{
		matrix = malloc(sizeof(char *) * 2);
		if(matrix == NULL)
			return(NULL);
		matrix[0] = malloc(sizeof(char)* (ft_strlen(s) + 1));
		if(matrix[0] == NULL)
		{
			free(matrix);
			return(NULL);
		}
		ft_strlcpy(matrix[0], s, ft_strlen(s) + 1);
		matrix[1] = NULL;
		return(matrix);
	}
	count = ft_count_blocs(s, c);
	matrix = (char **)malloc(sizeof(char *) * (count + 1));
	if(matrix == NULL)
		return(NULL);
	count = 0;
	while(*s)
	{
		s += count;
		s = ft_ctrim(s, c);
		if(*s == 0)
			break;
		count = ft_untilc_len(s, c);
		matrix[i] = malloc(sizeof(char) * (count + 1));
		if (matrix[i] == NULL)
		{
			while(i > 0)
				free(matrix[--i]);
			free(matrix);
			return (NULL);
		}
		ft_strlcpy(matrix[i], s, count + 1);
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}

// int main()
// {
// 	char *s = "tripouille";
// 	char c = 0;

// 	char **matrix = ft_split(s, c);
// 	for(int i = 0;matrix[i] != NULL; i++)
// 	{
// 		printf("%s\n", matrix[i]);
// 	}
// 	free(matrix);
// 	return 0;
// }