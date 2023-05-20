/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:45:01 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/18 15:23:07 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_toupper(char *str)
{
	int i = 0;
	
	while(str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;
		i++;
	}
	return str;
}
/*
int main()
{
	char a[50] = "hEy PeopLE!!*:)";
	printf("%s", ft_toupper(a));
}*/