// Write a C program to find sum of first and last digit of a number.

#include<stdio.h>
int main()
{
    int num, first_digit, last_digit, sum = 0;
    
    // User Input
    printf("\nEnter a number: ");
    scanf("%d", &num);

    // Calculate last digit
    last_digit = num % 10;

    // Calculate first digit
    while(num >= 10)
    {
        num /= 10;
    }
    first_digit = num;

    // Sum of first and last digit
    sum = first_digit + last_digit;

    // Display the results
    printf("\nLast number is %d", last_digit);
    printf("\nFirst number is %d", first_digit);
    printf("\nSum of First and Last number is %d", sum);
    return 0;
}