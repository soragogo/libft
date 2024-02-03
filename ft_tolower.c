/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:44:59 by ekamada           #+#    #+#             */
/*   Updated: 2023/06/03 16:15:02 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int	i;

	i = 0;
	if (c <= 'Z' && c >= 'A')
		c += 32;
	i++;
	return (c);
}

// int main()
// {
// 	char a[50] = "hEy PeopLE!!*:)";
// 	printf("%s", ft_tolower(a));
// }
