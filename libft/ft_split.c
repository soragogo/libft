/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:09:01 by ekamada           #+#    #+#             */
/*   Updated: 2023/06/03 17:18:35 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_blocs(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	**matrix_maker(char const *s, char c, char **matrix)
{
	int	i;
	int	start;
	int	end;
	int	len;

	i = 0;
	start = 0;
	while (s[start])
	{
		while (s[start] == c)
			start++;
		if (s[start] == '\0')
			break ;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		len = end - start;
		matrix[i] = ft_substr(s, start, len);
		if (matrix[i] == NULL)
		{
			while (i > 0)
				free(matrix[--i]);
			free(matrix);
			return (NULL);
		}
		start = end;
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}

static char	**c_zero_split(char **matrix, char const *s)
{
	matrix = malloc(sizeof(char *) * 2);
	if (matrix == NULL)
		return (NULL);
	matrix[0] = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (matrix[0] == NULL)
	{
		free(matrix);
		return (NULL);
	}
	ft_strlcpy(matrix[0], s, ft_strlen(s) + 1);
	matrix[1] = NULL;
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;

	if (s == NULL)
		return (NULL);
	if (*s == 0)
		return ((char **)ft_calloc(1, sizeof(char *)));
	if (c == 0)
	{
		matrix = NULL;
		return (c_zero_split(matrix, s));
	}
	matrix = (char **)malloc(sizeof(char *) * (ft_count_blocs(s, c) + 1));
	if (matrix == NULL)
		return (NULL);
	return (matrix_maker(s, c, matrix));
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