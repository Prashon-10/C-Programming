// wap to check whether a number entered by  the user is a palindrome or not

#include <stdio.h>

int main()
{
    int n, rev = 0, rem, tempVar;
    printf("\nEnter the Number: "); 
    scanf("%d", &n);
    tempVar = n;
    // while (n != 0)
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (tempVar == rev)
    {
        printf("\n%d is a Palindrome Number", tempVar);
    }
    else
    {
        printf("\n%d is not a Palindrome Number", tempVar);
    }
    return 0;
}
