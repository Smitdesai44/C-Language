#include<stdio.h>
int main()
{
    int i , n , max , min ;

    printf("\nEnter a array size = ");
    scanf("%d", &n);

    int x[n] ;
    printf("\nEnter the values of array = ");
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d", &x[i]);
    }

    max = x[0] , min = x[0] ;

    for(i = 0 ; i < n ; i++)
    {
        if(x[i] > max)
        {
            max = x[i] ;
        }

        if(x[i] < min)
        {
            min = x[i] ; 
        }
    }
    printf("\nmax = %d", max);
    printf("\nmin = %d", min);

    return 0 ;
}