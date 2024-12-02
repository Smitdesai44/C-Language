#include<stdio.h>
int fact(int);
int fact(int n)
{
    if(n == 0)
    return 1 ;
    else 
    return(n * fact(n - 1));
}

int main()
{
    int a , b ;
    printf("\nEnter a number = ");
    scanf("%d", &a);
    b = fact(a);
    printf("\nFactorial = %d", b);
}