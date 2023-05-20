/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:43:00 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/20 17:45:34 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_strlen(char const *str)
// {
//         int     i;

//         i = 0;
//         while (str[i] != '\0')
//                 i++;
//         return (i);
// }

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	int i_;
	int j;
	char *s2;
	int flag;
	
	s2 = (char*)malloc(sizeof(char) * ft_strlen(s1));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	i_ = 0;
	j = 0;
	flag = 0;
	while (s1[i])
	{
		while(set[j])
		{
			if (s1[i] == set[j])
			{
				flag = 1;
			}
			j++;
		}
		if (flag == 0)
		{
			s2[i_] = s1[i];
			i_++;
		} 
		j = 0;
		flag = 0;
		i++;
	}
	
	return (s2);
}

// int main()
// {
// 	char s1[] = "1234567890";
// 	char set[] = "13579";
// 	char *s2 = ft_strtrim(s1, set);

// 	printf("%s", s2);
// 	free(s2);
// 	return 0;
// }