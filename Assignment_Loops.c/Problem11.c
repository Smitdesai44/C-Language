// Write a C program to find first and last digit of a number.

#include <stdio.h>

int main()
{
    int num, first_digit, last_digit;

    // User Input
    printf("\nEnter a number: ");
    scanf("%d", &num);

    // Calculate last digit
    last_digit = num % 10;

    // Calculate first digit
    while (num >= 10)
    {
        num /= 10;
    }
    first_digit = num;

    // Display the results
    printf("First digit: %d\n", first_digit);
    printf("Last digit: %d\n", last_digit);

    return 0;
}