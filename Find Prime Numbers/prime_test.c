#include <stdio.h>

int main(){
    int i, num, count=0;

    printf("Enter the Number to check Prime Number: ");
    scanf("%d",&num);

    for (i = 2; i <= num; i++)
    {
        if (num%2==0)
        {
            count = 1;
            break;
        }
        
    }

    if (count==0)
    {
        printf("%d is a Prime Number.",num);
    }
    
    else{
        printf("%d is not a Prime Number.",num);
    }
    return 0;
    
}