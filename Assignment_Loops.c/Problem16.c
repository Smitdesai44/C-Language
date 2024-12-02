// Write a C program to enter a number and print its reverse.

#include <stdio.h>
int main()
{
    int num, rev = 0;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        int d = num % 10;
        rev = rev * 10 + d;
        num = num / 10;
    }
    printf("Reversed number is: %d", rev);
    return 0;
}