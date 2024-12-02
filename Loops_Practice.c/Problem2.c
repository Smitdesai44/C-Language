#include<stdio.h>
int main()
{
    int n ;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    int i = n;

    while(i >= 1)
    {
        printf("\n%d", i);
        i--;
    }

    return 0 ;
}