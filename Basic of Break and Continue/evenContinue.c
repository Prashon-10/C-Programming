#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        //if (i%2==0) //odd
        if (i%2 !=0)
        {
            // break;
            continue;
        }
        printf("%d\t", i);
    }
    return 0;
}