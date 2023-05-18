/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:05:24 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/18 15:22:44 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
int ft_strlcat(char *dst, const char *src, int n)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dst[i])
		i++;
	k = i;
	while (src[j] && i + j < n - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	while (src[j])
		j++;
	if (k < n) return k + j;
	else 	return n + j;
}
/*
int main()
{
	cha˙r src[50] = ":o:p:)";
	char dst[50] = "Helloo";
	printf("%d", ft_strlcat(dst, src, 10));
//	printf("%lu", strlcat(dst, src, 10));
	printf("%s", dst);
}*/
