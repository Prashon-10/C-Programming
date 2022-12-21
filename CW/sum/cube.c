#include<stdio.h>
int main(){
    int a,b,sum,product;
    printf("\nEnter the first number: ");
    scanf("%d",&a);
    printf("\nEnter the second number: ");
    scanf("%d",&b); 

    // Finding Sum and Product
    sum = a+b;
    product=a*b;
    printf("\nThe Sum is: %d",sum);
    printf("\nThe product is: %d",product);

    // Finding Cube of Sum and Product:

    printf("\nThe cube of Sum is: %d",sum*sum*sum);
    printf("\nThe cube of Product is: %d",product*product*product);
    return 0;
}