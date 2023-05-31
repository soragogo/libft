/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:09:01 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/19 16:55:30 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_count_and_malloc(char **matrix, const char *s, char c)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			count++;
			i++;
		}
		matrix[j] = (char *)malloc(sizeof(char) * count + 1);
		while (s[i] == c)
			i++;
		count = 0;
		j++;
	}
	matrix[j] = NULL;
	return (matrix);
}

char **ft_making_matrix(char **matrix, const char *s, char c)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			matrix[j][k] = s[i];
			i++;
			k++;
		}
		matrix[j][k] = 0;
		while (s[i] && s[i] == c)
			i++;
		k = 0;
		j++;
	}
	return (matrix);
}

int ft_count_blocs(char const *s, char c)
{
	int i;
	int blocs;

	i = 1;
	blocs = 0;
	if (s[0] != c)
		blocs++;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (s[i - 1] == c)
				blocs++;
		}
		i++;
	}
	return (blocs);
}

char **ft_split(char const *s, char c)
{
	char **matrix;
	int blocs;
	// int		count;

	// count = 0;
	blocs = ft_count_blocs(s, c);
	matrix = (char **)malloc(sizeof(char *) * (blocs + 1));
	matrix = ft_count_and_malloc(matrix, s, c);
	return (ft_making_matrix(matrix, s, c));
}

// int main()
// {
// 	char *s = "a1a22a333a4444a55555a666666a7777777aa";
// 	char c = 'a';

// 	char **matrix = ft_split(s, c);
// 	for(int i = 0;matrix[i] != NULL; i++)
// 	{
// 		printf("%s\n", matrix[i]);
// 	}
// 	free(matrix);
// 	return 0;
// }