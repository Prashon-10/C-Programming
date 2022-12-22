// ASCENDING ORDER

#include <stdio.h>
int main()
{
    /*
    int a[7] = {25, 28, 3, 9, 15, 2, 6}, i, j, temp;
    printf("Enter 10 numbers: ");
    for (i = 0; i < 6; i++)
    {
        for (j = i + 1; j < 7; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted numbers are: ");
    for (i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }
    */

    // DECENDING ORDER
    int a[7] = {25, 28, 3, 9, 15, 2, 6}, i, j, temp;
    printf("Enter 10 numbers: ");
    for (i = 0; i < 6; i++)
    {
        for (j = i + 1; j < 7; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted numbers are: ");
    for (i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
