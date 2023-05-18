/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:11:31 by ekamada           #+#    #+#             */
/*   Updated: 2023/05/18 15:26:40 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void	*ft_calloc(int n, int size)
{
	void	*str;

	str = (void *)malloc(size * n);
	return (str);
}

int main(void)
{
   int *ptr,*p;
   int i;

   /* 500個のintサイズのメモリを確保 */
   ptr = (int *)ft_calloc(500,sizeof(int));
   if(ptr == NULL) {
      printf("メモリが確保できません\n");
      exit(EXIT_FAILURE);
   }

   p = ptr;
   for (i=0; i<500; i++) {
      *p = i;
      printf("%d ",*p);
      p++;
   }

   /* メモリの開放 */
   free(ptr);

   return 0;
}
