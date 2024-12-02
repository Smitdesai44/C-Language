#include<stdio.h>
int main()
{
    int n , sum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    for(int i = 0 ; i <= n ; i++)
    {
        if(i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("\nSum of all even numbers till %d is %d", n , sum);
    
    return 0;
}