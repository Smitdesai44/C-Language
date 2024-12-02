/*#include<stdio.h>   
int main()                
{                         
 int i , j ;

 for(i = 3 ; i >= 1 ; i--)
 {
     for(j = i ; j <= 3 ; j++)
     {
         printf("%d",j);
     }
     printf("\n");
 }

    return 0 ;
} 
3
23
123 */

/*#include<stdio.h>
int main()
{
 int i , j ;

 for(i = 1 ; i <= 4 ; i++)
 {
     for(j = i ; j <= 4 ; j++)
     {
        printf("%d",j);
     }
     printf("\n");
 }

    return 0 ;
}*/

/*1234
234
34
4 */

#include<stdio.h>
int main()
{
 int k = 1 ;

 for(int i = 3 ; i >= 1 ; i--)
 {
     for(int j = 1 ; j <= i ; j++)
     {
         printf("%d",k);
         k++;
     }
     printf("\n");
 }

    return 0 ;
}