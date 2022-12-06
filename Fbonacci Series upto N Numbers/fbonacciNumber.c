// wap to find fbonacci number

#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fbonacci Series: %d, %d, ", a, b);
    for (i = 2; i < n; i++)
    {
        c = a + b;
        printf("%d, ", c);
        a = b;
        b = c;
    }
    return 0;
}