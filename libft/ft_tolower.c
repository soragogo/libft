/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:44:59 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/18 15:23:05 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_tolower(char *str)
{
	int i = 0;
	
	while(str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
		i++;
	}
	return str;
}

// int main()
// {
// 	char a[50] = "hEy PeopLE!!*:)";
// 	printf("%s", ft_tolower(a));
// }
