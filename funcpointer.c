/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcpointer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:44:23 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/17 22:24:17 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int (*operation)(int, int);

int add(int a, int b){
	return a + b;
} 

int subtract(int a, int b){
	return a - b;
}

int devide(int a, int b){
	return a % b;
}

void calculate(int (*op)(int, int), int x, int y){
	printf("result : %d\n", op(x, y));
}

int main(){
	int x = 10, y = 5;

	operation = add;
	printf("%d + %d = %d\n", x, y, operation(x, y));

	operation = subtract;
	printf("%d - %d = %d\n", x, y, operation(x, y));
	
	operation = devide;
	printf("%d percent  %d = %d\n", x, y, operation(x, y));

	calculate(add, x, y);
	calculate(subtract, x, y);
	calculate(devide, x, y);
	return 0;
}
