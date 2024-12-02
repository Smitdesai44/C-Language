// Write a C program to print all natural numbers in reverse (from n to 1). - using while loop

#include<stdio.h>
int main()
{
    int num;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    int i = num;
    while(i >= 1)
    {
        printf("%d ", i);
        i--;
    }
    return 0;
}