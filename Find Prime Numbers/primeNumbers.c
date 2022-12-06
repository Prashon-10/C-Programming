#include <stdio.h>
int main()
{
    int number, i, count = 0;

    printf("\nEnter the Number to check it's Prime or Not: ");
    scanf("%d", &number);

    for (i = 2; i <= number / 2; i++) // i=2
    {
        if (number % i == 0)
        {
            count=1;
            break; // Allows to terminate or stop the code from Looping!
        }
    }
    if (count == 0) //&& number != 1
    {
        printf("\n%d is a Prime Number.", number);
    }

    else
    {
        printf("%d is not a Prime Number.", number);
    }
    return 0;
}