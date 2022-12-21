// wap to check whether a number entered by  the user is a armstrong or not

#include <stdio.h>

int main()
{
    int n, rem, tempVar, sum = 0;
    printf("\nEnter the Number: ");
    scanf("%d", &n);
    tempVar = n;
    while (n != 0)
    {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }
    if (tempVar == sum)
    {
        printf("\n%d is a Armstrong Number", tempVar);
    }
    else
    {
        printf("\n%d is not a Armstrong Number", tempVar);
    }
    return 0;
}