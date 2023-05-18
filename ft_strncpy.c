/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:44:16 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/17 22:23:57 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dst, const char *src, int len)
{
	int i = 0;
	while(src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	return dst;
}
/*
#include <stdio.h>
int main()
{
	char dst[50];
	char src[] = "Hello people";
	ft_strncpy (dst, src, 30);
	printf("%s", dst);
}*/
