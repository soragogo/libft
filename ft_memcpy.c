void ft_memcpy(void *restrict dst, const void *restrict src, int n)
{
}

#include <string.h>
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b;

    int src1[10] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int dst1[10];

    char src2[10] = ":)";
    char dst2[10] = "hello";

    int i;
    memcpy(&b, &a, sizeof(int));
    printf("%d\n", b);

    memcpy(dst1, src1, sizeof(int) * 10);

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", dst1[i]);
    }

    memcpy(dst2, src2, sizeof(char) * 2);
    printf("%s", dst2);
}