/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:40:54 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/29 14:36:57 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{	
	size_t count;

	count = ft_strlen(src);
	while (dstsize > 1)
	{
		*dst++ = *src++;
		dstsize--;
	}
	if(dstsize == 1)
		*dst = 0;
	return (count);
}
