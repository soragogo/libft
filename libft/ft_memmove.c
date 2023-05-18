/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:26:29 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/17 21:09:30 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, int n)
{
	int				i;
	unsigned char	*dst1;
	unsigned char	*src1;

	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (dst1 < src1)
	{
		while (i < n)
		{
			dst1[i] = src1[i];
			i++;
		}
	}
	else
	{
		while (i++ < n)
		{
			dst1[n - i] = src1[n - i];
		}
	}
	return ((void *)dst1);
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	/*
    int a = 10;
    int b;

    int src1[10] = {
		1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int dst1[10];

    char src2[10] = ":)";
    char dst2[10] = "hello";

    int i;
    ft_memcpy(&b, &a, sizeof(int));
    printf("%d\n", b);

    ft_memcpy(dst1, src1, sizeof(int) * 10);

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", dst1[i]);
    }

	
	char src[] = "123456789123456789";
    ft_memmove(src+5, src, sizeof(char) * 10);
    printf("%s", src);
}
*/