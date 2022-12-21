#include <stdio.h>
int main()
{
    int i, Sum=0; //sum=0 is compulsory..

    for (i = 1; i <= 10; i++)
    {
        Sum = Sum + i;
    }

    printf("\nThe value is:%d", Sum);
}