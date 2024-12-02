#include<stdio.h>
int main()
{
    int i = 2 ;
    int* ptr1 = &i ;
    int** ptr2 = &ptr1 ;

    printf("\nThe value of i is %d", i);
    printf("\nThe address of i is %u", ptr1);
    printf("\nThe value of i is %d", **ptr2);

    return 0 ;
}