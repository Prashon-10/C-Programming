#include <stdio.h>
#include <math.h>
int main()
{
    double power, base;
    printf("\nEnter the number: ");
    scanf("%lf", &power);
    printf("\nEnter the number: ");
    scanf("%lf", &base);

    printf("\nThe %lf to the power of %lf is %lf",power,base,pow(base,power));
    return 0;
}