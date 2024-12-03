#include<stdio.h>
int main()
{
    int n;
    int sum_digit = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    int temp = n;

    while(n > 0)
    {
        sum_digit += n % 10;
        n /= 10;
    }
    printf("\nThe sum of digit of %d is %d", temp , sum_digit);
    return 0;
}