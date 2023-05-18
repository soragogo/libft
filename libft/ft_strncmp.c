/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:55:13 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/18 15:22:54 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	t;
	int	u;

	t = 0;
	u = 0;
	while ((s1[u] != '\0' || s2[u] != '\0') && (n > 0))
	{
		if (s1[u] == s2[u])
			u ++;
		else
		{
			t = s1[u] - s2[u];
			return (t);
		}
	n--;
	}
	return (t);
}
/*
int main()
{
	char copy[10] = {"he1234"};
	char name[10] = {"he12345"};
	printf("%d", ft_strncmp(copy, name, 1s));
	return 0;
}*/
