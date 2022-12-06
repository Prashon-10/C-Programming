#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            // break; //ASA number=4 it'll stop the Loop;
            continue; //Except 5;
        }
        printf("%d\t", i);
    }
    return 0;
}