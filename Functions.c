#include<stdio.h>

void add()
{
    printf("\n");
    int a ,b ;
    printf("\nEnter numbers = ");
    scanf("%d%d",&a,&b);
    int c = a + b ;
    printf("\nsum = %d",c);
}

void pro()
{
    printf("\n");
    int a , b ;
    printf("\nEnter numbers = ");
    scanf("%d%d",&a,&b);
    int c = a * b ;
    printf("\npro = %d",c);
}

void main()
{
    add();
    pro();
}