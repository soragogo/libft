/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:37:34 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/18 15:22:23 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_memchr(const void *s, int ch, int n)
{
	int				i;
	unsigned char*	s1;
	
	s1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == ch)
		{
			return ((char *)s1 + i);
		}
		i++;
	}
	return (NULL);
}

/*
#include        <stdio.h>
#include        <string.h>

int main(void)
{
        char str[] = "abcdef\0ghij";
        char *p;
        
        p = memchr(str, 'h', 12);
        printf("検索文字は文字列の%ld番目\n", p - str);
        
        return 0;
	
}
*/
