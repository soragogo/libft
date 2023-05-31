/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:38:30 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/31 10:27:04 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	
	if (start >= ft_strlen(s) || len == 0)
	{
		*str = 0;
		return (str);
	}
	else
	{
		s += start;
		ft_strlcpy(str, s, len + 1);
	}
	return (str);
}

// int main()
// {
// 	char s[] = "libft-test-tokyo";
// 	int start = 20;
// 	int len = 100;

// 	char *str = ft_substr(s, start, len);
// 	printf("%s", str);
// 	free(str);
// }