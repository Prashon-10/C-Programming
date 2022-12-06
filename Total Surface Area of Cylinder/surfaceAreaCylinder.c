# include<stdio.h>
int main(){
    float radius, height, pieValue, surfaceArea;
    printf("\nEnter the Radius to find Area of a Cylinder: ");
    scanf("%f",&radius);
    printf("\nEnter the Height to find the Area of a Cylinder: ");
    scanf("%f",&height);

    pieValue= 3.141592653589793238;
    surfaceArea= 2*pieValue*radius*(radius+height);

    printf("\nThe Surface Area of Cylinder is: %0.2f",surfaceArea);
    return 0;
}