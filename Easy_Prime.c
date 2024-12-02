#include<stdio.h>
int main()
{
    int cnt = 0 , i , n ;

    printf("\nEnter a number");
    scanf("%d", &n);

    for(i = 1 ; i <= n ; i++)
    {
        if(n % i == 0)
        {
            cnt++;
        }
    }
    
    if(cnt == 2)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }
    return 0 ;
}