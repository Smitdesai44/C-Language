#include<stdio.h>
int main()
{ int n , sum =0 ;

 printf("Enter a number = ");
 scanf("%d",&n);

 while(n != 0)
 {
     int d = n % 10;
     sum = sum + d;
     n = n / 10;
 }
 printf("%d",sum);

    return 0 ;
}