#include <stdio.h>
int main()
{
    double num1, num2, num3;
    printf("\nEnter the first number: ");
    scanf("%lf", &num1);
    printf("\nEnter the second number: ");
    scanf("%lf", &num2);
    printf("\nEnter the third number: ");
    scanf("%lf", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("\n%0.2lf is the Largest Value.", num1);
    }
    else if (num2 > num3 && num2 > num1)
    {
        printf("\n%0.2lf is the Largest Value.", num2);
    }
    else if (num3>num2 && num3>num1)
    {
        printf("\n%0.2lf is the Largest Value.", num3);
    }
    else{
        printf("All are Equal MATE!");
    }

    return 0;    
}