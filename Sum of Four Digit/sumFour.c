#include <stdio.h>
int main()
{
    int firstNumber, secondNumber, thirdNumber, fourNumber, Sum;
    printf("\nEnter the Numbers to Add: ");
    scanf("%d %d %d %d", &firstNumber, &secondNumber, &thirdNumber, &fourNumber);

    Sum = firstNumber + secondNumber + thirdNumber + fourNumber;

    printf("\nThe sum of four Numbers are: %d", Sum);
    return 0;
}