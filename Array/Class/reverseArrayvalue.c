// wap to reverse wsinh while loop
#include <stdio.h>

int main()
{
    int i, j, tempVar;
    int arr[5] = {1, 2, 3, 4, 5};
    i = 0;
    j = 4;
    while (i < j)
    {
        tempVar = arr[i];
        arr[i] = arr[j];
        arr[j] = tempVar;
        i++;
        j--;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}