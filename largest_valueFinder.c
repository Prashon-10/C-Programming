#include <stdio.h>
int main()
{
    double n1, n2, n3;

    printf("\nEnter the first number: ");
    scanf("%lf", &n1);

    printf("\nEnter the second number: ");
    scanf("%lf", &n2);

    printf("\nEnter the third number: ");
    scanf("%lf", &n3);

    // main If Else starts
    if (n1 >= n2)
    {
        if (n1 >= n3)
        {
            printf("\n%0.2lf is the Largest Value.", n1);
        }

        else
        {
            printf("\n%0.2lf is the Largest Value.", n3);
        }
    }
    else
    {
        if (n2 >= n3)
        {
            printf("\n%0.2lf is the Largest Value.", n2);
        }
        else
        {
            printf("\n%0.2lf is the Largest Value.", n3);
        }
    }
}