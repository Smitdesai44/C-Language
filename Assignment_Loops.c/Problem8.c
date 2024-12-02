// Write a C program to find sum of all odd numbers between 1 to n.

#include<stdio.h>
int main()
{
    int num, sum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        if(i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("\nThe sum of all odd natural numbers between 1 to %d is %d", num, sum);
    return 0;
}