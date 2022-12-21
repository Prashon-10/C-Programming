#include <stdio.h>
int main()
{
    int i = 1, j;

    while (i <= 10)
    {
        j = 1;
        while (j <= 10)
        {
            printf("\n%d * %d = %d", i, j, i * j);
            j++;
        }
        i++;
    }

    printf("\n");
    return 0;
}
