/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:44:12 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/18 14:09:39 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(const char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}
/*
#include <stdio.h>

int main()
{
	char test[] = "Helloooooooo:)";
	printf("%d", ft_strlen(test));
}*/
