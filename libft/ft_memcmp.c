/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:48:17 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/18 15:22:26 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, int n)
{
	int				i;
	unsigned char	*buf1_;
	unsigned char	*buf2_;

	i = 0;
	buf1_ = (unsigned char *)buf1;
	buf2_ = (unsigned char *)buf2;
	while (i < n)
	{
		if (buf1_[i] != buf2_[i])
		{
			return (buf1_[i] - buf2_[i]);
		}
		i++;
	}
	return (buf1_[i] - buf2_[i]);
}

// int main(void)
// {
//         char buf1[] = "\0abc\0de";      /* 途中に空文字のある文字列 */
//         char buf2[] = "\0abc\0de";
//         char buf3[] = "\0abcdef";
//         if (ft_memcmp(buf1, buf2, 7) == 0)
//                 printf("buf1 = buf2\n");
//         else
//                 printf("buf1 != buf2\n");
//         if (ft_memcmp(buf1, buf3, 7) == 0)
//                 printf("buf1 = buf3\n");
//         else
//                 printf("buf1 != buf3\n");
//         return 0;
// }
