#include<stdio.h>

int sum_natural(int);

int sum_natural(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return sum_natural(n - 1) + n;
    }
}

int main()
{
    int n ;

    printf("\nEnter the number till where you want sum = ");
    scanf("%d", &n);

    int sum = sum_natural(n);

    printf("The sum of first %d numbers is %d", n , sum);

    return 0 ;
}