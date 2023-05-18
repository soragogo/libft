/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sscanf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:44:22 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/17 22:24:17 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char input[50];
	int num1, num2;
	printf("Enter two numbers: ");
	fgets(input, 50, stdin);
	sscanf(input, "%d %d", &num1, &num2);
	printf("You entered %d and %d", num1, num2);
	return 0;
}	
