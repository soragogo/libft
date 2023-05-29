/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:44:32 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/29 14:28:46 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int check_overflow(const char *str, int minus)
{
	char *str_ = (char *)str;
	if(ft_strlen(str_) > ft_strlen("9223372036854775807"))
		return(-1);
	else if(ft_strlen(str_) == ft_strlen("9223372036854775807"))
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

int	ft_atoi(const char *str)
{
	int	i;
	long long int j;
	int	minus;

	i = 0;
	j = 0;	
	minus = 1;
	while ((*str == ' ')
			||(str[i] == '\t')||(str[i] == '\n')
			||(str[i] == '\v')||(str[i] == '\f')
			||(str[i] == '\r')||(str[i] == ' '))
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
	if (check_overflow(str, minus) != 1)
		return(check_overflow(str, minus));
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
