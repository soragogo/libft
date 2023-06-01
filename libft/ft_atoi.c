/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:44:32 by ekamada           #+#    #+#             */
/*   Updated: 2023/06/01 22:03:16 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int check_overflow(const char *str, int minus, size_t count)
{
	char *str_ = (char *)str;
	if(count > ft_strlen("9223372036854775807"))
		return(-1);
	else if(count == ft_strlen("9223372036854775807"))
	{
		if(minus < 0)
		{
			printf("%d",ft_strncmp(str_, "9223372036854775808", 19));
			if((ft_strncmp(str_, "9223372036854775808", 19)) > 0)
				return(0);
		}
		else if((ft_strncmp(str_, "9223372036854775807", 19)) > 0)
				return(-1);
	}
	return(1);
}

size_t num_len(const char *str)
{
	size_t i;

	i = 0;
	while(str[i] >= '0' && str[i] <= '9')
		i++;
	return(i);
}

int	ft_atoi(const char *str)
{
	int	i;
	long long int j;
	int	minus;
	size_t count;

	i = 0;
	j = 0;	
	count = 0;
	minus = 1;
	while ((*str == ' ')
			||(*str == '\t')||(*str == '\n')
			||(*str == '\v')||(*str == '\f')
			||(*str == '\r')||(*str == ' '))
		str++;
	if (*str == '-')
	{
		minus = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while(*str == '0')
			str++;
	count = num_len(str);
	if (check_overflow(str, minus, count) != 1)
		return(check_overflow(str, minus, count));
	while (*str >= '0' && *str <= '9')
	{
		j = j *10 + *str - '0';
		str++;
	}
	return ((int)j * minus);
}

// int main()
// {
// 	printf("%d", ft_atoi("18446744073709551614"));
// }
