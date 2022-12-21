// Wap to serach value intered by user in array

#include <stdio.h>

int main()
{
    int a[10], i, n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the value to search: ");
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (a[i] == n)
        {
            printf("Value found at %d position", i + 1);
            break;
        }
    }
    if (i == 10)
    {
        printf("Value not found");
    }
    return 0;
}