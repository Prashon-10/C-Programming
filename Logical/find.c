// #include <stdio.h>
// int main()
// {
//     int a, b;
//     a = 220;
//     // b = 25;
//     // printf("\nThe values are: %d", a ^ b);
//     printf("\nRight Shift 220 by 2 bits: %d", a>>2);
//     return 0;
// }

#include <stdio.h>
int main()
{
    float unitPrice = 10.0, dis1 = 0.05, dis2 = 0.1, dis3 = 0.15, totalPrice, totalQuantity;

    printf("\n Enter the total Quantity: "),
        scanf("%f", &totalQuantity);

    totalPrice = totalQuantity * unitPrice * (1.0 - 
    (totalQuantity > 50 ? dis1 : 
    (totalQuantity > 20 ? dis2 : 
    (totalQuantity > 10 ? dis3 : 0.0))));
    printf("\nTotal Price is %0.2f", totalPrice);
    return 0;
}