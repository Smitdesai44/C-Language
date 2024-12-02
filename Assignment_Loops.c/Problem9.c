// Write a C program to print multiplication table of any number.

#include<stdio.h>
int main()
{
    int num ;

    printf("\nEnter a number of which table you want to print: ");
    scanf("%d", &num);

    printf("Multiplication of number %d is: ", num);
    for(int i = 1; i <= 10; i++)
    {
        printf("\n%d x %d = %d", num, i, num * i);
    }
    return 0;
}