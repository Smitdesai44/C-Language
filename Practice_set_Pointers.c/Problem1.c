#include<stdio.h>
int main()
{
    int n ;
    int* ptr = &n ;

    printf("\nEnter any number = ");
    scanf("%d", &n);

    printf("\nThe address of n is %u\n", &n);
    printf("The value of n is %d", *ptr);
    
    return 0 ;
}