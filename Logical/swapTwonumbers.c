#include <stdio.h>
int main()
{
    int a, b, tempVar;

    printf("\nEnter the first number to Swap: ");
    scanf("%d", &a);
    printf("\nEnter second number to Swap: ");
    scanf("%d", &b);

    tempVar = a;
    a = b;
    b = tempVar;

    printf("\nResult after Swaping is: a=%d, b=%d \n", a, b);
    return 0;
}