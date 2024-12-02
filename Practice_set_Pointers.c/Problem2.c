#include<stdio.h>
void address(int*);

void address(int* ptr)
{
    printf("\nThe address of ptr is %d", ptr);
    printf("\nThe value of ptr is %d", *ptr);
}

int main()
{
    int i = 5 ;
    int* ptr = &i ;
    printf("\nThe address of i is %u", &i);
    address(ptr);
    return 0 ;
}

