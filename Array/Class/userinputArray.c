#include <stdio.h>

int main()
{
    int a[5], b[5], sum[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the First Value: ");
        scanf("%d", &a[i]);
        printf("Enter the Second Value: ");
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nSum = %d", sum[5] = a[i] + b[i]);
    }

    return 0;
}
