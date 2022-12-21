// PROGRAM TO ADD TWO VALUES

#include<stdio.h>
int main(){
    int a,b,sum; //Variable declaration
    printf("\nEnter the first value: ");
    scanf("%d",&a);//ampersand
    printf("\nEnter the second value: ");
    scanf("%d",&b);
    sum=a+b; //Remove sum=a+b;
    printf("\nSum of two values: %d",sum);//In place of sum write a+b directly..
    return 0;
}
