#include<stdio.h>
int main()
{
    int a = 4 ;
    printf("%d %d %d", a , ++a , a++);
    // 6 6 4 // evaluatio is right to left
    // 4 5 5 // if this output comes...evaluation will be left to right
    return 0 ;
}