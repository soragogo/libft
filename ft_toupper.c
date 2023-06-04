/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:45:01 by ekamada           #+#    #+#             */
/*   Updated: 2023/06/03 16:15:01 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	i;

	i = 0;
	if (c <= 'z' && c >= 'a')
		c -= 32;
	i++;
	return (c);
}

/*
int main()
{
	char a[50] = "hEy PeopLE!!*:)";
	printf("%s", ft_toupper(a));
}*/