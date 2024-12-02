/* #include<stdio.h>           // printing tables which user want
int main()
{
 int num , i ;
 printf("\nEnter a number for which you want to print the table = ");
 scanf("%d",&num);

 for(i = 1 ; i <= 10 ; i++)
 {
     printf("\n%d * %d = %d",num,i,num*i);
 }

    return 0 ;
} */

#include<stdio.h>
int main()
{
 int i , j ;
 for (i = 1 ; i <= 15 ; i++)            // printing tables from 1 - 15 
 {
     for(j = 1 ; j <= 10 ; j++)
     {
         printf("\n%d * %d = %d", i,j,i*j);
     }
 }
    return 0 ;
}