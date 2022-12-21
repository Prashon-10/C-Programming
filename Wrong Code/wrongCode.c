#include <stdio.h>
int main()
{
    int a = 0, i = 0, b;
    for (i = 0; i < 5; i++)
    {
        a++;
        continue;
    }
    printf("The value of a is: %d", a);
    return 0;
}