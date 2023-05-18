/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:44:32 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/18 15:22:15 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	minus;

	i = 0;
	j = 0;	
	minus = 1;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		minus = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		j *= 10;
		j += str[i] - '0';
		i++;
	}
	return (j * minus);
}
/*
int main()
{
	char str[] = "         -2147483648";
	printf("%d", ft_atoi(str));
}*/
