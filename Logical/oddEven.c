#include <stdio.h>
int main()
{
    int a, b;
    printf("\nEnter the first Number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("\nEven: %d", a);
    }

    else
    {
        printf("\nOdd: %d", a);
    }
}