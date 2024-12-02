// Write a C program to swap first and last digits of a number.

#include<stdio.h>
int main()
{
    int num, first_digit, last_digit;

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

    printf("\nFirst number is %d", first_digit);
    printf("\nLast number is %d", last_digit);

    int temp = first_digit;
    first_digit = last_digit;
    last_digit = temp;

    printf("\n\nAfter swapping the number\n");

    printf("\nFirst number: %d", first_digit);
    printf("\nLast number: %d", last_digit);
    return 0;
}