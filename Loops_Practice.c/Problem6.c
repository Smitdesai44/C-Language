#include<stdio.h>
int main()
{
    int n , sum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    for(int i = 0 ; i <= n ; i++)
    {
        sum += i;
    }
    printf("\nSum of all numbers till %d is %d", n , sum);

    return 0;
}