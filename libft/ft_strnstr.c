/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:56:39 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/18 14:09:41 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strnstr(char *str, char *to_find, int n)
{
        int     t;
        int     u;
        int     count;

        t = 0;
        u = 0;
        count = 0;
        while (to_find[count] != '\0')
                count++;
        if (to_find[0] == '\0')
                return (str);
        while (str[t] != '\0' && to_find[u] != '\0' && t < n)
        {
                if (to_find[u] == str[t])
                        u ++;
                else
                        u = 0;
                t++;
        }
        if (to_find[u] != '\0')
                return (0);
        return (&str[t - count]);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
//         char str[30] = "sergsawe";
//         char to_find[30] = "r";

//         printf("ft:%s\n", ft_strnstr(str, to_find, 2));
// 		printf("st:%s\n", strnstr(str, to_find, 2));

// }