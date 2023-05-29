/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:43:00 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/29 19:03:56 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int s1_len;
	int set_len;
	int check;
	char *s1_;
	char *cpy;
	
	check = 1;
	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	while(*s1)
	{
		while(*set)
		{
			if (*s1 == *set)
			{
				check = 0;
				set++;
			}
		}
		if (!check)
			break;
		check = 1;
		s1++;
		set -= set_len;
	}
	s1_ = (char *)s1;
	check = 1;
	while(*(s1 + 1))
		s1++;
	while(*s1)
	{
		while(*set)
		{
			if(*s1 == *set)
			{
				check = 0;
				set ++;
			}
		}
		if (!check)
			break;
		check = 1;
		s1--;
		set -= set_len;
	}
	cpy = malloc(sizeof(char)*(s1 - s1_ + 1));
	ft_strlcpy(cpy, s1_, s1 - s1_);
	return (cpy);


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