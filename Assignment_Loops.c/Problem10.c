// Write a C program to count number of digits in a number.

#include<stdio.h>
int main()
{
    int num, count = 0;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    if(num == 0)
    {
        count = 1;
    }
    
    if(num < 0)
    {
        num = -num;
    }

    while(num > 0)
    {
        num /= 10;
        count++;
    }
    printf("Number of digit: %d\n", count);
    return 0;
}