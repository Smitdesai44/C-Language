// Write a C program to print all even numbers between 1 to 100. - using while loop

#include<stdio.h>
int main()
{
    int num;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\nEven numbers are: ");
    int i = 1;
    while(i <= num)
    {
        if(i % 2 ==0)
        {
            printf("\n%d", i);
        }
        i++;
    }    
    return 0;
}