//PROGRAM to find the Remainder...

#include<stdio.h>
int main(){
    int a,b,remainder;
    // printf("\nEnter the first value: ");
    printf("\nEnter the two values: ");
    scanf("%d %d",&a,&b);

    // scanf("%d",&a);
    // printf("\nEnter the second number: ");
    // scanf("%d",&b);
    // remainder=a%b;
    // printf("\nRemainder of two numbers: %d",remainder);
    printf("\nRemainder of two numbers: %d",a%b);
    return 0;
}