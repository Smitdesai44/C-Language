// Write a C program to print all odd number between 1 to 100.

#include<stdio.h>
int main()
{
    int num;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\nOdd numbers are: ");
    int i = 1;
    while(i <= num)
    {
        if(i % 2 != 0)
        {
            printf("\n%d", i);
        }
        i++;
    }    
    return 0;
}