#include <stdio.h>

int main()
{
    int i;
    // Definite Loop

    for (i = 1; i <= 100; i+=2) //i=1 => ODD i=2 => EVEN
    {
        printf("\n%d Times", i);
    }

    printf("\n i = %d", i);

    return 0;
}