#include<stdio.h>

int fibo(int);

int fibo(int n)
{
    if(n == 1 || n == 2)
    {
        return n - 1;
    }
    else 
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
    int n;

    printf("\nEnter which position of number you need = ");
    scanf("%d", &n);

    // int fibonacci = fibo(n);

    printf("the value of fibonacci series at %d is %d", n , fibo(n));
    return 0 ;
}