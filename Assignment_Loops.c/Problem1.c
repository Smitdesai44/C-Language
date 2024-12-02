// Write a C program to print all natural numbers from 1 to n. - using while loop

#include<stdio.h>
int main()
{
    int num;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    int i = 1;
    while(i <= num)
    {
        printf("%d ", i);
        i++;
        // break;
    }
    return 0;
}