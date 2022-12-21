// wap to read 3 numbers and print each digit seperately.

#include <stdio.h>

int main()
{
    int num, digit;
    printf("Enter a 3 digit number: ");
    scanf("%d", &num);
    while (num>0)
    {
        digit = num % 10;
        printf("\n%d ",digit);
        num = num / 10;
    }
    return 0;
}