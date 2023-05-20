/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:44:42 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/19 17:19:06 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_isascii(int c)
{
	if ((int)c <= 127 && (int)c >= 0)
	return (1);
	else return (0);
}
/*
int main()
{
	char c = '3';
	printf("%d", ft_isalpha(c));
}*/
