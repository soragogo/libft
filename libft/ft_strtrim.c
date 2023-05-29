/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:43:00 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/29 18:42:31 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int s1_len;
	int set_len;
	int check;
	int trim;
	
	check = 1;
	trim = 0;
	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	while(trim)
	{
		while(*s1 && *set)
		{
			if (*s1 == *set)
			{
				check = 0;
				set++;
			}
		}
	}

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