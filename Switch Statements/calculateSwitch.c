#include <stdio.h>

int main()
{
    int a, b, c;
    char op;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    printf("\n Operators: \n +\n -\n *\n /\n mod\n Enter the operator: ");
    scanf(" %c", &op);
    switch (op)
    {

    case '+':
        c = a + b;
        printf("The sum of %d and %d is %d", a, b, c);
        break;
    case '-':
        c = a - b;
        printf("The difference of %d and %d is %d", a, b, c);
        break;
    case '*':
        c = a * b;
        printf("The product of %d and %d is %d", a, b, c);
        break;
    case '/':
        c = a / b;
        printf("The quotient of %d and %d is %d", a, b, c);
        break;
    case '%':
        c = a % b;
        printf("The Modulus of %d and %d is %d", a, b, c);
        break;
    default:
        printf("Invalid Operator!");
        break;
    }
    return 0;
}
