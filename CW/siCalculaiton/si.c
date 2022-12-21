#include <stdio.h>
int main()
{
    int pri, time, rate;
    printf("\nEnter the Principle: ");
    scanf("%d", &pri);
    printf("\nEnter the Time (in Year): ");
    scanf("%d", &time);
    printf("\nEnter the Rate: ");
    scanf("%d", &rate);

    printf("\nSimple Interest: %d", pri * time * rate / 100);
    return 0;
}