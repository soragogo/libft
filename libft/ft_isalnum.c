/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:44:39 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/18 15:22:18 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// int ft_isdigit(char c)
// {
// 	if (c <= '9' && c >= '0')
// 	return (0);
// 	else return (1);
// }
// int ft_isalpha(char c)
// {
// 	if ((c <= 'z' && c >= 'a')
// 			||(c <= 'Z' && c >='A'))
// 	return (0);
// 	else return (1);
// }
int ft_isalnum(char c)
{
	if ((ft_isdigit(c) == 0) || (ft_isalpha(c) == 0))
		return 0;
	else return 1;
}
/*
int main()
{
	printf("%d", ft_isalnum('('));
}*/
