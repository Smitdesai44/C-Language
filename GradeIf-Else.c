#include<stdio.h>
int main()
{
 int mrks ;

 printf("\nEnter your Grade = ");
 scanf("%d",&mrks);

 if(mrks >= 90)
 {
     printf("\nA");
 }
 else if(mrks >= 70)
 {
     printf("\nB");
 }
 else if(mrks >= 50)
 {
     printf("\nC");
 }
 else if(mrks >= 35)
 {
     printf("\nD");
 }
 else
 {
     printf("\nF");
 }

    return 0 ;
}