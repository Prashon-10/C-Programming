// PROGRAM TO ADD TWO floating Values;

#include<stdio.h>
int main(){
    float a,b,floatValue; //Variable declaration
    printf("\nEnter the first value: ");
    scanf("%f",&a);//ampersand
    printf("\nEnter the second value: ");
    scanf("%f",&b);
    floatValue=a+b; //Remove sum=a+b;
    printf("\nSum of two values: %.2f",floatValue);//In place of sum write a+b directly..
    return 0;

    //%.2f lekhne;
}
