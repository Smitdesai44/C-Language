// Write a C program to find frequency of each digit in a given integer.

#include<stdio.h>
int main()
{
    int num;
    int frequency[10] = {0}; // Array to store frequency of each number (0 - 9)

    printf("\nEnter a number: ");
    scanf("%d", &num);

    // handle negative number by converting to positive
    if(num < 0)
    {
        num = -num;
    }

    // if user input 0
    if(num == 0)
    {
        frequency[0]++; // You enter kitne bhi "0", output 1 hi aayga
    }

    while(num != 0)
    {
        int d = num % 10;
        frequency[d]++; // increment the counter for that number
        num = num / 10;
    }

    // print the frequency of each number
    printf("\nFrequency of each number:");
    for(int i = 0; i < 10; i++)
    {
        if(frequency[i] > 0)
        {
            printf("\nNumber %d: %d times", i, frequency[i]);
        }
    }

    return 0;
}