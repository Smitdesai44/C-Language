// Write a C program to calculate sum of digits of a number.

#include <stdio.h>
int main()
{
    int n, sum = 0;

    printf("\nEnter a number = ");
    scanf("%d", &n);

    while (n != 0)
    {
        int d = n % 10;
        sum = sum + d;
        n = n / 10;
    }
    printf("%d", sum);

    return 0;
}