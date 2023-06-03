/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:55:13 by ekamada           #+#    #+#             */
/*   Updated: 2023/06/03 15:33:59 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				t;
	int				u;
	unsigned char	*s1_;
	unsigned char	*s2_;

	t = 0;
	u = 0;
	s1_ = (unsigned char *)s1;
	s2_ = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((s1_[u] != '\0' || s2_[u] != '\0') && (n > 0))
	{
		if (s1_[u] == s2_[u])
			u ++;
		else
		{
			t = s1_[u] - s2_[u];
			return (t);
		}
		n--;
	}
	return (t);
}

// int main()
// {
// 	//char copy[10] = {"he1234"};
// 	//char name[10] = {"he12345"};
// 	printf("%d", strncmp(NULL, "hello", 0));
// 	printf("%d", strncmp(NULL, NULL, 0));
// 	return 0;
// }
