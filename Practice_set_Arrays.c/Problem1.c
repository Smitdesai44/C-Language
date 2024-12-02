#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int* ptr = a; // this indicates the address of first element which is 1

    printf("The value at address %u is %d", ptr+2 , *(ptr+2));    
}