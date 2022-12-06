# include<stdio.h>
# include<math.h>
int main(){
    float radius, Area, Circumference, piValue;
    printf("\nEnter the Radius of the Circle: ");
    scanf("%f",&radius);

    piValue = 3.141592653589793238;
    Area = piValue * radius * radius;
    printf("\nThe Area of Cirlce is: %0.2f",Area);

    Circumference = 2*piValue*radius;
    printf("\nThe Circumference of Circle is: %0.2f",Circumference);

    return 0;
}