#include <stdio.h>
int main()
{
    int Sum = 0;
    for (int i = 1; i < 100; i++)
    {
        if (i % 2 != 0)
        {
            Sum += i;
        }
    }
    printf("\nThe sum of Odd Number from 1 to 100 is: %d", Sum);
}