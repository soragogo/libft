/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fgets.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:43:57 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/17 22:24:15 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char name[50];
	printf("Enter your name");
	fgets(name, 50, stdin);
	printf("Your name is: %s", name);
	return 0;
}
