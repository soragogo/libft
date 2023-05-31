/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:25:11 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/29 17:54:18 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_itoa_recursive(char *ascii, int n)
{
	unsigned long i;
	unsigned long n_ = (unsigned long)n;

	if (n_ < 10)
		*ascii++ = n_ + '0';
	if (n_ > 9)
	{
		i = 1;
		while(i < n_)
			i *= 10;
		i /= 10;
		while (i != 0)
		{
			*ascii++ = n_ / i + '0';
			n_ = n_ % i;
			i /= 10;
		}
	}
	*ascii = 0;
}

char *ft_itoa(int n)
{
	char *ascii;
	
	if (n == -2147483648)
	{
		ascii = "-2147483648";
		return (ascii);
	}	
	ascii = (char *)malloc(sizeof(char) * 12);
	if (n < 0)
	{
		ascii[0] = '-';
		ascii ++;
		ft_itoa_recursive(ascii, -n);
		ascii --;
	}
	else
		ft_itoa_recursive(ascii, n);
	return (ascii);

}

// int main()
// {
// 	char *p = ft_itoa(2147483647);
// 	printf("%s", p);
// }