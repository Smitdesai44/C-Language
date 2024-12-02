// Write a C program to calculate product of digits of a number.

#include<stdio.h>
int main()
{
    int num , pro = 1;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        int d = num % 10;
        pro *= d;
        num = num / 10;
    }
    printf("Product of a digit is: %d", pro);
    return 0;
}