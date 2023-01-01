#include <stdio.h>
int main()
{
    // int i,j,num;

    // printf("\nEnter the Number of rows: ");
    // scanf("%d",&num);

    // for(i=1;i<=num;i++){
    //     for(j=1;j<=i;j++){
    //         printf("%d",i);
    //     }
    //     printf("\n");
    // }
    // return 0;

    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}