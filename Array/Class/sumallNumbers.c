#include <stdio.h>

int main()
{
    int a[10], i, sum = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter the value %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Your Total Sum is: ");
    for (i = 0; i < 10; i++)
        sum = sum + a[i];
    {
        printf("%d\n",sum);
    }
    return 0;
}