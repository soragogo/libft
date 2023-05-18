/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:44:53 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/17 22:24:00 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char *ft_strdup(const char *str)
{
	int i;
	char *cpy;
	while(str[i])
		i++;
	cpy = malloc(sizeof(char) * i + 1);
	if (cpy == NULL)
		return NULL;
	i = 0;
	while(str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	return (cpy);
}
/*
#include <stdio.h>
int main()
{
	char *str = "Hello People";
	char *cpy = ft_strdup(str);
	printf("Copied string: %s\n", cpy);
	free(cpy);
	return 0;
}*/
