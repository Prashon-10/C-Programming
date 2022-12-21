#include <stdio.h>
int main()
{
    int a, b, enter;
    printf("\nEnter the first Number: ");
    scanf("%d", &a);
    printf("\nEnter the second Number: ");
    scanf("%d", &b);

    printf("\n 1.ADD\n 2.SUBTRACT\n 3.MULTIPLY\n 4.DIVISION\n 5.MODULUS\n Select the Option to Calculate: ");
    scanf("%d",&enter);

    if (enter== 1)
    {
        int addNumber=a+b;
        printf("ADD: %d",addNumber);
    }
    else if (enter==2)
    {
        int subNumber=a-b;
        printf("SUBTRACT: %d",subNumber);
    }
    else if (enter==3)
    {
        int multNumber=a*b;
        printf("MULTIPLICATION: %d",multNumber);
    }

    else if (enter==4)
    {
        int divNumber=a/b;
        printf("DIVISION: %d",divNumber);
    }

    else if (enter==5)
    {
        int modNumber=a%b;
        printf("MODULUS: %d",modNumber);
    }

    else{
        printf("Invalid Mate!");
    }
}