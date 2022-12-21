// WAP to find LCM of two Numbers;

#include <stdio.h>

int main()
{
    int a, b, lcm;
    printf("\nEnter the First Number: ");
    scanf("%d", &a);
    printf("\nEnter the Second Number: ");
    scanf("%d", &b);

    for (int i = 1; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }

    printf("\nLCM of %d and %d is %d", a, b, lcm);
    return 0;
}