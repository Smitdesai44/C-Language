#include<stdio.h>
int main()
{
    int x[10];
    int i , sum = 0 ;

    printf("\nEnter ten values = ");
    for(i = 0 ; i < 10 ; i++)
    {
        scanf("%d", &x[i]);
    }

    printf("\nEntered values are = ");
    for(i = 0 ; i < 10 ; i++)
    {
        printf("\nx[%d] = %d", i , x[i]);
    }
    for(i = 0 ; i < 10 ; i++)
        {
            sum = sum + x[i];
        }
        printf("\nsum = %d", x[i]);

    return 0 ;
}