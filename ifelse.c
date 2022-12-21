#include <stdio.h>
int main()
{
    int a, b;
    printf("\nEnter the first value to compare: ");
    scanf("%d", &a);
    printf("\nEnter the second value to compare: ");
    scanf("%d", &b);

    if (a>b)
    {
        printf("\n%d is greater than %d",a,b);
    }
    else
    {
        printf("\n%d is greter than %d",b,a);
    }

return 0;
    
}