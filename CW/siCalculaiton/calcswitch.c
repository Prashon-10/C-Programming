// wap to make a calculator using switch case

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value to Calculate: \n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("The sum of a and b is %d", a + b);
        break;
    case 2:
        printf("The difference of a and b is %d", a - b);
        break;
    case 3:
        printf("The product of a and b is %d", a * b);
        break;
    case 4:
        printf("The division of a and b is %d", a / b);
        break;
    default:
        printf("Invalid input");
        break;
    }
    return 0;
}