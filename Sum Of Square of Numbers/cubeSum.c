#include <stdio.h>

int main(){
    int a,b,c,square;
    printf("\nEnter the Numbers to get the sum of squares: ");
    scanf("%d %d %d",&a,&b,&c);

    square=(a*a)+(b*b)+(c*c);
    printf("\nThe Sum of square of digits are: %d",square);

    return 0;
}