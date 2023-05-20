/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:05:24 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/20 19:49:08 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t ft_strlcat(char * dst, const char * src, size_t dstsize)
{
	size_t return_item;
	size_t mojisuu;

	if(dst == NULL)
		return(ft_strlen(src));
	mojisuu = 0;
	if (dstsize < ft_strlen(dst))
	{
		mojisuu = dstsize;
		return_item = ft_strlen(src) + dstsize;
	}
	else
	{	
		mojisuu = dstsize - ft_strlen(dst);
		return_item = ft_strlen(src) + ft_strlen(dst);
	
	dstsize -= ft_strlen(dst);
	dst += ft_strlen(dst);
	while(mojisuu > 1 && *src)
	{
		*dst++ = *src++;
		mojisuu--;
	}
	
	*dst = 0;
	}
	return(return_item);

}

// int main()
// {
// 	char src[50] = ":o:p:)";
// 	char dst[50] = "1234567890";
// 	strlcat(dst, src, 3);
// 	// printf("%lu", ft_strlcat(NULL, src, 0));
// 	printf("%s", dst);
// }