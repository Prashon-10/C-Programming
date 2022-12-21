#include <stdio.h>

int main()
{
    int a, b;
    char op;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    printf("\n Operators: \n a\n b\n c\n d\n e\n Enter the operator: ");
    scanf(" %c", &op);
    switch (op)
    {

    case 'a':
        printf("The sum of %d and %d is %d", a, b,a + b);
        break;
    case 'b':
        printf("The difference of %d and %d is %d", a, b,a -b);
        break;
    case 'c':
        printf("The product of %d and %d is %d", a, b, a*b);
        break;
    case 'd':
        printf("The quotient of %d and %d is %d", a, b, a/b);
        break;
    case 'e':
        printf("The Modulus of %d and %d is %d", a, b, a%b);
        break;
    default:
        printf("Invalid Operator!");
        break;
    }
    return 0;
}