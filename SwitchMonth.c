#include<stdio.h>
int main()
{
 int month ;
 printf("\nEnter the number between 1 - 12 = ");
 scanf("%d",&month);

 switch(month)
 {
     case 1 :
     printf("\n%d = January",month);
     break ;

     case 2 :
     printf("\n%d = February",month);
     break ;

     case 3 :
     printf("\n%d = March",month);
     break ;

     case 4 :
     printf("\n%d = April",month);
     break ;

     case 5 :
     printf("\n%d = May",month);
     break ;

     case 6 :
     printf("\n%d = June",month);
     break ;

     case 7 :
     printf("\n%d = July",month);
     break ;

     case 8 :
     printf("\n%d = August",month);
     break ;

     case 9 :
     printf("\n%d = September",month);
     break ;

     case 10 :
     printf("\n %d = October",month);
     break ;

     case 11 :
     printf("\n%d = November",month);
     break ;

     case 12 :
     printf("\n%d = December",month);
     break ;
 }


    return 0 ;
}