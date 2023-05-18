/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:44:11 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/17 22:24:14 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dst, const char *src){
	int i;
	i = 0;
	
	while (src[i])
	{	
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return dst;
}
/*
#include <stdio.h>
int main(){
	char str1[] = "Helloooooooo;)";
	char str2[50];
	ft_strcpy(str2, str1);
	printf("%s", str2);
	return 0;
}*/
