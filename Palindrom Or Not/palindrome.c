// Wap to check wheather a number enterd by a user is palindrome or not..

#include <stdio.h>

int main()
{
    int n, rev = 0, rem, tempVar;
    printf("\nEnter the Number: ");
    scanf("%d", &n);
    tempVar = n;

    // Start of a While Loop!
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    // Start Of IF ELSE!
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

// ctrl+alt+n