#include<stdio.h>
int main()
{
    int n ;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    printf("\nTable of %d is: ",n);

    for(int i = 1; i <= 10; i++)
    {
        printf("\n%d x %d = %d", n , i , n * i);
    }
    
    return 0;
}