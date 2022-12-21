// wap to convert octal to decimal and vice versa

#include <stdio.h>
#include <math.h>
int main()
{
    int octal, decimal = 0, i = 0, rem;
    printf("Enter the octal number: ");
    scanf("%d", &octal);
    while (octal != 0)
    {
        rem = octal % 10;
        decimal = decimal + rem * pow(8, i);
        i++;
        octal = octal / 10;
    }
    printf("The decimal number is %d", decimal);
    return 0;
}