#include <stdio.h>

int main()
{
    int num1, num2;
    char option;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Choose your options: \n a. ADD \n b. SUB \n c. MUL \n d. DIV \n e. MOD");

    switch (option)
    {
    case 'a':
        printf("The sum of %d and %d is %d", num1, num2, num1 + num2);
        break;
    case 'b':
        printf("The difference of %d and %d is %d", num1, num1 - num2);
        break;
    case 'c':
        printf("The product of %d and %d is %d", num1, num2, num1 * num2);
        break;
    case 'd':
        printf("The quotient of %d and %d is %d", num1, num2, num1 / num2);
        break;
    case 'e':
        printf("The Modulus of %d and %d is %d", num1, num2, num1 % num2);
        break;
    default:
        printf("Invalid Operator!");
        break;
    }
    return 0;
}
