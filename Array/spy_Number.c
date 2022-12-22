#include <stdio.h>

int main()
{
    int n, sum = 0, prod = 1, d;
    printf("Enter the number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        d = n % 10;
        sum = sum + d;
        prod = prod * d;
        n = n / 10;
    }

    if (sum == prod)
        printf("Spy number");

    else
        printf("Not a spy number");

    return 0;
}