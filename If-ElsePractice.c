#include<stdio.h>
int main()
{
 int num ;

 printf("\nEnter a Number = ");
 scanf("%d",&num);

 if(num > 0)
 {
     printf("\n%d is Positive Number",num);
 }
 else if(num == 0)
 {
     printf("\n%d is Neither Positive nor Negative",num);
 }
 else
 {
     printf("\n%d is Negative Number",num);
 }
 
    return 0 ;
}