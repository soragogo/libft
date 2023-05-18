/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:39:56 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/18 15:22:58 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int last = -1;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			last = i;
		}
		i++;
	}
	if (last == -1)
	{
		return (NULL);
	}
	else
	{
		return ((char *)s + last);
	}
}
/*
int main()
{
	char str[] = "abbdefghijklmnopqrstuvwxyzb", *p;
	p = ft_strrchr(str, 'b');
	printf("%ld", p - str);
	return 0;
}
*/
