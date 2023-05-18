/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:40:54 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/18 15:22:50 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_else(char *dest, char *src, unsigned int size)
{
	{
		dest[size - 1] = '\0';
		while (size > 1)
		{
			size --;
			dest[size - 1] = src[size - 1];
		}
	}
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{	
	unsigned int	count;
	unsigned int	t;

	count = 0;
	t = 0;
	while (src[count] != '\0')
		count ++;
	if (size > count)
	{
		dest[count] = '\0';
		while (src[t] != '\0')
		{
			dest[t] = src[t];
			t ++;
		}
	}
	else
		ft_else(dest, src, size);
	return (count);
}
